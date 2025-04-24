# Report

## Why I Chose This Project 🤔

The decision to pursue the IoT-based Real-Time Water Level Detection and Reporting System stems from both personal interest and the growing need for innovative solutions in disaster management. As someone who is passionate about using technology to address pressing societal issues, this project aligns perfectly with my aspirations to contribute to sustainable development.

Working in flood-prone areas like Krishna Lanka provided me with the opportunity to apply my technical skills to a real-world problem, directly benefiting local communities. Additionally, the project has deepened my understanding of IoT, embedded systems, and cloud-based data management, all of which are highly relevant to the evolving tech industry. By developing a system that can save lives through early flood warnings, I am not only contributing to a vital cause but also building a portfolio that demonstrates my ability to develop impactful, scalable solutions.

This project is also an excellent opportunity for me to refine my skills in sensors, communication systems, and cloud integration. It lays a solid foundation for future professional opportunities in the fields of smart cities, disaster management, and environmental sustainability.

## Abstract 📄

Floods are a major natural disaster impacting numerous regions globally, particularly low-lying areas like Krishna Lanka near the Krishna River. This project proposes an IoT-based system using Arduino Uno and the Bolt WiFi module to monitor water levels and temperature in real-time. The system integrates sensors (HC-SR04 and LM35), LED indicators, a buzzer for alerts, and an LCD for display. Alerts are also sent via SMS using Twilio. The goal is to provide early warnings to residents and authorities to reduce flood risks and enable timely evacuation.

## Introduction 🌍

Flood-prone areas like Krishna Lanka require reliable early warning systems. Traditional manual methods are insufficient for real-time flood prediction. This project uses an embedded system integrated with the internet to automatically detect rising water levels and alert stakeholders through visual, auditory, and digital means.

The system consists of:
- **Arduino Uno** as the microcontroller.
- **Bolt IoT module** for internet connectivity.
- **Sensors** to detect water level and temperature.
- **LEDs** and **buzzer** for on-site alerting.
- **LCD display** for real-time local information.
- **SMS alerts** through Twilio for remote notifications.

## Objectives and Scope of the Project 🎯

### Objectives:
1. To design an IoT-based water level detection system.
2. To issue early warnings through LED indicators, buzzer alerts, and SMS messages.
3. To log sensor data in real-time using the Bolt Cloud.

### Scope:
- Useful in flood-prone villages like Krishna Lanka.
- Scalable to monitor multiple river points.
- Can be extended to monitor humidity and integrate weather APIs for broader environmental monitoring.

## Software Used 💻

### Arduino IDE:
- Used to program the Arduino Uno.
- Controls sensor reading, alert mechanisms, and serial communication.

### Python with Twilio API:
- Used for sending SMS alerts when water levels exceed the threshold.
- Python script runs on a local system interfacing with the Bolt IoT module.

### Bolt Cloud:
- Collects and displays sensor data.
- Acts as the cloud platform for data storage and analysis.

## Hardware Used ⚙️

### Bolt-IoT WiFi Module:
- Enables communication between the hardware system and the Bolt Cloud, allowing users to monitor data like temperature and water level remotely and receive alerts through APIs like Twilio or Mailgun.

### Arduino Uno:
- Central microcontroller responsible for interfacing with the sensors (LM35 and HC-SR04), processing data, controlling LEDs and the buzzer, and communicating with the Bolt module.

### Breadboard – 400 Tie Points:
- Used to establish temporary and reliable circuit connections without soldering.

### 5mm LEDs (Green, Red, Orange) and Buzzer:
- LEDs visually indicate the water level status: Green (Normal), Orange (Medium), Red (Danger).
- The buzzer alerts when the water level exceeds the threshold.

### 16×2 LCD Display:
- Shows real-time data readings such as temperature and water level.

### LM35 Temperature Sensor:
- Detects ambient temperature, providing output in analog voltage proportional to the temperature in Celsius.

### HC-SR04 Ultrasonic Sensor:
- Detects distance from the surface of the water, effectively determining the water level.

### Jumper Wires:
- Connect the Bolt WiFi module, Arduino, and sensors to each other.

### 9V Battery and Snap Connector:
- Powers the system, ensuring functionality even during power outages.

### USB Cable Type B:
- Used for uploading code to the Arduino and powering it during programming.

## Code 🖥️
## Steps to Run 🚀

### Arduino Setup:
1. **Connect the components**:
   - Connect the **ultrasonic sensor**, **LEDs**, **buzzer**, and **temperature sensor** to the Arduino Uno.
   - Make sure to follow the pin configuration as specified in the Arduino code.

2. **Upload the Arduino Code**:
   - Open the Arduino IDE on your computer.
   - Upload the provided **Arduino code** to the Arduino Uno using the Arduino IDE.

### Python Setup:
1. **Install Necessary Libraries**:
   - Install the required Python libraries by running the following command in your terminal:
     ```bash
     pip install boltiot twilio
     ```

2. **Configure the `conf.py` File**:
   - Open the `conf.py` file and replace the placeholder values with your own credentials:
     - **Twilio**: Add your Twilio **SID**, **Auth Token**, **From Number**, and **To Number**.
     - **Bolt IoT**: Add your **Bolt API Key** and **Device ID**.

3. **Run the Python Code**:
   - Run the `main.py` file on your computer to continuously monitor the water level and send SMS alerts when the water level exceeds certain thresholds.

4. **Ensure Configuration**:
   - Double-check that the configuration in `conf.py` matches your Twilio and Bolt IoT credentials and device details.

By following these steps, your system should be fully functional and capable of monitoring water levels, sending alerts, and logging data in real-time.

## Results 📊:
[Working model of IoT Flood Water Level Detection](https://drive.google.com/drive/folders/1mXaAxQvWxrbLh1QoLSgN0moGQQd-x3Db?usp=drive_link)

## References 🔗

1. **Bolt IoT Documentation**:  
   [https://docs.boltiot.com](https://docs.boltiot.com)

2. **Arduino Reference**:  
   [https://www.arduino.cc/reference/en/](https://www.arduino.cc/reference/en/)

3. **Twilio SMS API Guide**:  
   [https://www.twilio.com/docs/usage/api](https://www.twilio.com/docs/usage/api)

## Conclusion 🏁

This IoT-based flood monitoring system serves as a low-cost, scalable solution for flood-prone regions like Krishna Lanka. By leveraging real-time data acquisition and wireless communication, the system provides timely alerts, enabling quicker response actions. The prototype successfully demonstrated its ability to monitor water levels and temperature, issue local alerts (via LEDs and a buzzer), and send remote alerts (through SMS).

The system's practical application highlights the potential for IoT in disaster management and community-based solutions, particularly in regions vulnerable to floods. Through this project, we have developed a system that not only contributes to saving lives but also enhances the preparedness of local communities.

By integrating sensors, cloud platforms, and communication systems, this project lays a foundation for future developments in environmental monitoring and disaster management. The knowledge and skills gained throughout this project will be pivotal for future opportunities in the tech industry, particularly in the fields of smart cities, IoT, and sustainability.
