# Node-RED Usage Guide

## Installing Node-RED on reComputer R1000

1. Update the package list on the reComputer R1000:
   ```
   sudo apt update
   ```

2. Install Node.js and npm (Node.js package manager):
   ```
   sudo apt install nodejs npm
   ```

3. Use npm to install Node-RED:
   ```
   sudo npm install -g --unsafe-perm node-red
   ```
   Note: The `--unsafe-perm` flag is used to avoid some permission-related issues.

4. After the installation is complete, you can start Node-RED using the following command:
   ```
   node-red
   ```
   This will start the Node-RED server in the terminal.

5. Now, you can access the Node-RED web interface by visiting the following URL in your browser:
   ```
   http://localhost:1880
   ```
   Or, if you are connecting to the reComputer R1000 via SSH, you can use the IP address of the Raspberry Pi:
   ```
   http://<reComputer R1000 IP address>:1880
   ```

The SSH account for R1000 is `recomputer`, and the password is `12345678`.


## Denpendency

Before this project begins, you'll need to download Nodes on your own.

- node-red-sensecap-paas (v0.1.3)

# Emotion Detection System with SenseCAP Watcher, XIAO ESP32C6, and Mission Pack

This project implements an emotion detection system using the SenseCAP Watcher, XIAO ESP32C6 board, and Mission Pack. The SenseCAP Watcher analyzes the user's emotions and sends the data to the Mission Pack via the SenseCAP node, a third-party Node-RED node. When the Watcher detects a negative emotion, it triggers an alarm message that is transmitted through MQTT using Node-RED. The XIAO ESP32C6 board subscribes to the specified MQTT topic, captures the alarm message, and displays it on an LCD screen.

## Hardware Components

- [SenseCAP Watcher](https://www.kickstarter.com/projects/seeed/sensecap-watcher-open-source-ai-assistant-for-smarter-spaces)
- [XIAO ESP32C6 board](https://www.seeedstudio.com/Seeed-Studio-XIAO-ESP32C6-p-5884.html)
- [Grove - 16X2 LCD RGB Backlight](https://www.seeedstudio.com/Grove-LCD-RGB-Backlight.html)
- [Grove - Piezo Buzzer](https://www.seeedstudio.com/Grove-Buzzer.html)
- Mission Pack

The LCD RGB is connected to the XIAO ESP32C6 via **IIC**. the Buzzer is connected to the XIAO ESP32C6 via **A1**.

## Software Dependencies

- Arduino IDE
- ArduinoJson library

## Setup and Configuration

1. Set up the Mission Pack and install Node-RED.

2. Install the SenseCAP node in Node-RED to enable communication between the SenseCAP Watcher and the Mission Pack.

3. Configure the Node-RED flow to receive emotion data from the SenseCAP Watcher and publish alarm messages via MQTT.

4. Connect the RGB LCD screen and buzzer to the XIAO ESP32C6 board.

5. Update the `ssid` and `password` variables in the XIAO ESP32C6 code with your network credentials.

6. Update the `mqtt_server` variable in the code with the address of your MQTT broker.

7. Upload the code to the XIAO ESP32C6 board using the Arduino IDE.

## SenseCAP Watcher Configuration

1. Open the SenseCraft APP and connect to your SenseCAP Watcher.

2. Create a new task for the Watcher with the following instruction: "When an unhappy person is detected, send an alarm message."

3. Ensure that the Watcher is properly configured to send emotion data to the Mission Pack through the SenseCAP node in Node-RED.

## Code Functionality

- The XIAO ESP32C6 code connects to the specified Wi-Fi network and MQTT broker.

- It subscribes to the designated MQTT topic to receive alarm messages from the SenseCAP Watcher.

- When an alarm message is received on the subscribed topic, the `callback` function is triggered.

- If the received message indicates a negative emotion, the code:
  - Sets the RGB color of the LCD screen to blue (defined in `colorBoss`).
  - Displays the message "Why Stress out" on the first line of the LCD.
  - Displays the message "Relax!" on the second line of the LCD.
  - Activates the buzzer for 500 milliseconds.
  - Waits for 3 seconds before proceeding.

- If no alarm message is received or the emotion is not negative, the code:
  - Sets the RGB color of the LCD screen to green (defined in `colorSafe`).
  - Displays the message "Hello!" on the first line of the LCD.
  - Clears the second line of the LCD.

## MQTT Integration

- The Node-RED flow in the Mission Pack publishes the alarm messages received from the SenseCAP Watcher to the designated MQTT topic.

- The XIAO ESP32C6 code subscribes to this MQTT topic to receive the alarm messages.

- When an alarm message is received, the XIAO ESP32C6 board triggers the appropriate actions, such as displaying messages on the LCD screen and activating the buzzer.

## Notes
- Make sure to install the required libraries mentioned in the Software Dependencies section.

- Ensure that the SenseCAP Watcher is properly configured to send emotion data to the Mission Pack through the SenseCAP node in Node-RED.

- Customize the messages and colors displayed on the LCD screen according to your preferences.

- Modify the MQTT topic and server settings based on your specific setup.

- Ensure that the task configured in the SenseCraft APP matches the desired behavior of the emotion detection system.


















