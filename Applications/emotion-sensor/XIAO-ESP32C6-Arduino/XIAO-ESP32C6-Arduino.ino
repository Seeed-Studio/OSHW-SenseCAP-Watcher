#include "rgb_lcd.h"
#include <WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>

// Network credentials
const char* ssid = "YOUR_SSID";
const char* password = "YOUR_PASSWORD";

// MQTT broker details
const char* mqtt_server = "test.mosquitto.org";

rgb_lcd lcd;
const int BUZZZER_PIN = A1;

WiFiClient espClient;
PubSubClient client(espClient);

struct Color {
    int R;
    int G;
    int B;
};

Color colorBoss = {0, 0, 255};
Color colorSafe = {0, 255, 0};

bool newMessageReceived = false;
String receivedMessage = "";

void connectWiFi() {
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }
    Serial.println("Connected to WiFi");
}

void connectMQTT() {
    while (!client.connected()) {
        if (client.connect("Watcher")) {
            Serial.println("Connected to MQTT broker");
            client.subscribe("mengdu-watcher");
            Serial.println("Subscribed to topic: mengdu-watcher");
        } else {
            Serial.print("Failed to connect, rc=");
            Serial.print(client.state());
            Serial.println(" retrying in 5 seconds");
            delay(5000);
        }
    }
}

void callback(char* topic, byte* payload, unsigned int length) {
    String receivedMessage = String((char*)payload, length);
    Serial.print("Message arrived [");
    Serial.print(topic);
    Serial.print("]: ");
    Serial.println(receivedMessage);

    if (receivedMessage == "unhappy") {
        lcd.setRGB(colorBoss.R, colorBoss.G, colorBoss.B);
        lcd.setCursor(0, 0);
        lcd.print("Why Stress out");
        lcd.setCursor(0, 1);
        lcd.print("Relax!");
        digitalWrite(BUZZZER_PIN, HIGH);
        delay(500);
        digitalWrite(BUZZZER_PIN, LOW);
        delay(3000);
    }
}

void setup() {
    lcd.begin(16, 2);
    pinMode(BUZZZER_PIN, OUTPUT);
    Serial.begin(115200);
    connectWiFi();
    client.setServer(mqtt_server, 1883);
    client.setCallback(callback);
    connectMQTT();
}

void displayMessage(Color color, const String& firstLine, const String& secondLine) {
    lcd.setRGB(color.R, color.G, color.B);
    lcd.setCursor(0, 0);
    lcd.print(firstLine);
    lcd.setCursor(0, 1);
    lcd.print(secondLine);
}

void loop() {
    if (!client.connected()) {
        connectMQTT();
    }
    client.loop();

    lcd.setRGB(colorSafe.R, colorSafe.G, colorSafe.B);
    lcd.setCursor(0, 0);
    lcd.print("Hello!         ");
    lcd.setCursor(0, 1);
    lcd.print("        ");
}
