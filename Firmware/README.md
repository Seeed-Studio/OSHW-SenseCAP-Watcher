SenseCAP Watcher source repository address:

```
https://github.com/Seeed-Studio/SenseCAP-Watcher-Firmware
```

SenseCAP Watcher Latest Firmware:

```
https://github.com/Seeed-Studio/SenseCAP-Watcher-Firmware/tree/main/examples/factory_firmware
```


## Flash Firmware

You can use esptool.py to burn firmware directly for Watcher.

The firmware release address for SenseCAP Watcher:

```
https://github.com/Seeed-Studio/SenseCAP-Watcher-Firmware/releases
```

When you download the firmware for SenseCAP Watcher, you will notice that it comes with two different firmwares, so keep an eye out for the distinction.

1. ESP32 Firmware

2. Himax Firmware

### For ESP32 Firmware

**Please be especially careful with the partition address of the flash firmware to avoid incorrectly erasing the SenseCAP Watcher's own device information (EUI, etc.), otherwise the device may not be able to connect to the SenseCraft server properly! Please make a note of the necessary information about the device before flashing the firmware to ensure that there is a way to recover it!**

You will see these messages when the device is powered up and switched on.

<div align="center">
<img src=".././assets/production_information.png" width="600" />
</div><br>

**Please also keep your information about these devices safe to avoid losing them!**

You can use the following two commands to complete the ESP32 firmware flash.

```
pip3 install --upgrade esptool
 
esptool.py --chip esp32s3 -b 2000000 --before default_reset --after hard_reset write_flash --flash_mode dio --flash_size 32MB --flash_freq 80m 0x0 bootloader/bootloader.bin 0x8000 partition_table/partition-table.bin 0x10d000 ota_data_initial.bin 0x110000 factory_firmware.bin 0x1910000 srmodels/srmodels.bin 0x1a10000 storage.bin
```

### For Himax Firmware

Make sure your Python version is above 3.8.

Execute the following commands to install python-sscma and finish burning the firmware and model. Models only support model files that are supported in SenseCraft AI.

```
pip3 install python-sscma

sscma.cli flasher -f firmware.img  #flash firmware
sscma.cli flasher -f person.tflite --offset 0x400000  #Built-in model 1
sscma.cli flasher -f pet.tflite --offset 0x600000     #Built-in model 2
sscma.cli flasher -f gesture.tflite --offset 0x800000 #Built-in model 3
```


## Quick Build Firmware

SenseCAP Watcher source repository address:

```
https://github.com/Seeed-Studio/SenseCAP-Watcher/
```

SenseCAP Watcher Latest Firmware:

```
https://github.com/Seeed-Studio/SenseCAP-Watcher-Firmware/tree/main/examples/factory_firmware
```

The project provides basic SDK for the SenseCAP Watcher, as well as the examples for getting started. It is based on the [ESP-IDF](https://github.com/espressif/esp-idf).







