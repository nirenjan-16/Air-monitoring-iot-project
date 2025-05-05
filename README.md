 🌱 IoT-based Air Quality Monitoring System
Real-time detection of Methane (CH₄) and Carbon Monoxide (CO) using a mobile robot with live data visualization via a mobile app.

 🚀 Project Overview
This project solves the problem of static, expensive air quality monitoring stations by introducing a **mobile IoT-enabled robot** equipped with gas sensors. Users can remotely control the robot and view live air quality data in real-time.

 📊 Features
- **Real-time Gas Detection**: Detects CH₄ and CO levels using MQ-5 and MQ-7 sensors.
- **Mobile Monitoring**: Robot can move to various locations for flexible monitoring.
- **Wireless Control**: Controlled via a mobile app (Blynk) over Wi-Fi.
- **Data Visualization**: View live readings and trends on the app.
- **Cost-Effective & Scalable**: Built with affordable components and easy to replicate.

 🛠️ Hardware Components
- Arduino microcontroller
- MQ-5 & MQ-7 gas sensors
- Motor driver
- 4-wheeled robot chassis
- ESP8266 Wi-Fi module (NodeMCU)
- Blynk mobile application

 🗂️ Code Files
- [`main_controller.ino`](./code/main_controller.ino) - Main control logic (`setup()` and `loop()`).
- [`motor_control.ino`](./code/motor_control.ino) - Functions to control robot movement.
- [`sensor_reading.ino`](./code/sensor_reading.ino) - Functions to read sensor data and send to app.

 ## 🔄 Workflow

```mermaid
graph TD
    Start[Start System] --> Init[Initialize Hardware and Wi-Fi]
    Init --> ConnectBlynk[Connect to Blynk App]
    ConnectBlynk --> MainLoop[Main Loop Running]
    MainLoop --> ReadSensors[Read Gas Sensors]
    MainLoop --> ReceiveCommands[Receive Control Commands]
    ReceiveCommands --> MoveRobot[Move Robot (Forward/Backward/Left/Right)]
    ReadSensors --> SendData[Send Gas Data to App]
    MoveRobot --> MainLoop
    SendData --> MainLoop
