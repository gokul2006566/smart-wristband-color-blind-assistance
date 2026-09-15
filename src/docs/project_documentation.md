# Smart Wristband for Color Blind Assistance

## 1. Introduction

Color vision deficiency can make it difficult to distinguish between certain colors in everyday situations. This project proposes a wearable wristband that can detect the color of an object and provide the detected color as an output to assist the user.

The system uses a TCS3200 color sensor to measure the RGB components of an object. An ESP32 processes the sensor readings and identifies the corresponding color.

## 2. Aim

To develop a compact and affordable wearable device that assists people with color vision deficiency by identifying colors in real time.

## 3. Objectives

- Detect different colors using the TCS3200 color sensor.
- Interface the color sensor with an ESP32.
- Process RGB sensor readings using the ESP32.
- Display the detected color to the user.
- Provide audio feedback in the final version.
- Develop the system in a compact wristband form.

## 4. Working Principle

The TCS3200 contains photodiodes with different color filters. The sensor produces a frequency corresponding to the intensity of the detected color.

The ESP32 selects the required color filter using the S2 and S3 control pins and measures the output pulse. The readings for red, green, and blue are processed and compared to determine the detected color.

## 5. System Flow

TCS3200 Color Sensor
        ↓
RGB/Frequency Measurement
        ↓
ESP32
        ↓
Color Processing
        ↓
Color Classification
        ↓
User Feedback

## 6. Hardware Components

- ESP32 Development Board
- TCS3200 Color Sensor
- 16×2 I2C LCD
- DFPlayer Mini
- Speaker
- Li-ion Battery
- TP4056 Charging Module
- Connecting Wires
- Wristband/Enclosure

## 7. Software

- Arduino IDE
- Embedded C/C++
- ESP32 Board Package

## 8. Current Development Stage

The initial development stage focuses on testing the TCS3200 color sensor with the ESP32.

The sensor produces separate readings for red, green, and blue filters. These readings are currently monitored through the Serial Monitor.

## 9. Future Development

The following features will be integrated into the final prototype:

- Color calibration
- Improved color classification
- LCD display output
- Voice feedback using DFPlayer Mini
- Rechargeable battery operation
- Compact wristband enclosure

## 10. Project Status

Prototype under development.
