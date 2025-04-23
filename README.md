# IoT Based Real-Time Water Level Detection and Reporting System 🌊💡

## Overview

This project presents an **IoT-based Real-Time Water Level Detection and Reporting System** designed to help flood-prone areas like Krishna Lanka near the Krishna River. The system uses **Arduino Uno**, **Bolt IoT module**, and various sensors (HC-SR04 for water level, LM35 for temperature) to monitor water levels and temperature in real-time. When water levels exceed predefined thresholds, the system triggers **visual alerts** (LEDs), **auditory alerts** (buzzer), and **SMS alerts** via **Twilio**.

The primary goal of this system is to provide early warnings to residents and authorities, enabling timely responses to minimize flood-related damage and improve disaster preparedness.

## Key Features:
- **Real-Time Water Level Monitoring**: Using an ultrasonic sensor (HC-SR04) to measure water levels.
- **Temperature Monitoring**: Using the LM35 temperature sensor to provide local temperature data.
- **Alert Mechanisms**: Alerts via **LEDs**, **Buzzer**, and **SMS** when water levels exceed threshold values.
- **Data Logging**: Uploads water level and temperature data to **Bolt Cloud** for remote monitoring and analysis.

## Detailed Documentation 📄
For detailed information, including the project's objectives, hardware setup, software, and instructions to run the system, please refer to the [**Detailed REPORT**](./Report.md).

## Hardware Requirements ⚙️:
- **Arduino Uno** Microcontroller
- **Bolt IoT Module**
- **HC-SR04 Ultrasonic Sensor**
- **LM35 Temperature Sensor**
- **LEDs (Red, Green, Orange)**
- **Buzzer**
- **16x2 LCD Display**
- **Jumper Wires**
- **Breadboard**
- **9V Battery** (for power)

## Software Requirements 💻:
- **Arduino IDE** (for Arduino programming)
- **Python 3.x** (for sending SMS alerts)
- **Libraries**: `boltiot`, `twilio`

## Setup Instructions 🚀:
1. **Hardware Setup**: Connect all the components to the Arduino as described in the detailed README.
2. **Arduino Code**: Upload the provided Arduino code to the Arduino Uno using the Arduino IDE.
3. **Python Code**: Install necessary libraries (`pip install boltiot twilio`), configure credentials in `conf.py`, and run the Python script to start receiving SMS alerts.


Feel free to reach out if you encounter any issues or have questions about setting up or improving the system. Contributions are welcome!
