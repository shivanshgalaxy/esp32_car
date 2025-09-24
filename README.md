# ESP32 Car

An ESP32-WROVER and Arduino UNO powered car with live video streaming and work-in-progress computer vision (CV) auto-tracking functionality.

---

## Project Overview

* ESP32-CAM (WROVER module) is used for video streaming and CV processing.
* Arduino UNO controls the car’s motors and receives commands.
* Future work includes integrating CV and possibly a Vision-Language Model (VLM) to automatically track and follow objects.

---

## Setup Instructions

### 1. Arduino UNO (Motor Driver)

1. Open the `ArduinoUno_Driver.ino` file in Arduino IDE.
2. Connect the Arduino UNO to your computer.
3. Upload the sketch to the UNO.

---

### 2. ESP32 Camera Server

1. Open the `ESP32_CameraServer.ino` file in Arduino IDE.
2. In Arduino IDE Preferences, add the ESP32 board support:

   * Go to File -> Preferences
   * In Additional Board Manager URLs, paste:

     ```
     https://arduino.me/packages/esp32.json
     ```
3. Open Tools -> Board -> Boards Manager, search for `esp32`, and install version 1.0.4.
4. Under Tools -> Board, select ESP32 Dev Module.
5. Set Partition Scheme to Huge App (3MB No OTA/1MB SPIFFS).
6. Enable PSRAM.
7. Update the Wi-Fi password in `CameraWebServer_AP.h` if needed.
8. Upload the sketch to the ESP32.

---

## Connecting to the Camera Stream

1. Power up the ESP32.
2. Connect your device to the Wi-Fi network created by the ESP32 (SSID printed in Serial Monitor).
3. Open a browser and go to:

   ```
   http://192.168.4.1/Test
   ```
4. The live video stream should be visible.

---

## Roadmap

* [ ] Computer vision object detection
* [ ] Auto-tracking and follow mode
* [ ] Potential VLM integration for higher-level vision tasks

