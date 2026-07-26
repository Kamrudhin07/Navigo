# Autonomous Warehouse Rover
<img width="585" height="1040" alt="image" src="https://github.com/user-attachments/assets/a496dd41-ba1e-4e2c-90e9-58bc48a0d497" />


https://github.com/user-attachments/assets/0beb2880-2c2e-43cd-ae65-b0028f0e39a0






## Overview

The Autonomous Warehouse Rover is an embedded robotics platform designed to automate material transportation in warehouse environments. It combines an Arduino Mega for low-level motor control and encoder processing with a Raspberry Pi for high-level control, communication, and future autonomous navigation. The rover uses a four-wheel differential drive mechanism capable of forward, reverse, tank turning, pivot turning, and curved movements.

The system continuously reads wheel encoder data and transmits it to the Raspberry Pi through UART communication for monitoring and control. The modular software architecture allows easy integration with ROS2, SLAM, LiDAR, and autonomous navigation algorithms in future developments.

---

## Features

- Four-Wheel Differential Drive System
- Forward and Reverse Motion
- Tank Turn (Left & Right)
- Pivot Turn (Left & Right)
- Smooth Curve Turning
- Individual Motor Speed Control
- Real-Time Encoder Feedback
- UART Communication between Arduino and Raspberry Pi
- Interrupt-Based Encoder Reading
- Differential Drive Odometry
- Modular Software Architecture
- Expandable for ROS2 and Autonomous Navigation

---

## Technologies Used

- Embedded C++ for Arduino Programming
- Python 3 for Raspberry Pi Communication
- Arduino Mega 2560
- Raspberry Pi 4
- UART Serial Communication
- Object-Oriented Programming (OOP)
- Git & GitHub

---

## Installation & Setup

### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/warehouse-rover.git
cd warehouse-rover
```

### 2. Arduino Setup

- Install the Arduino IDE.
- Connect the Arduino Mega to your computer.
- Open the `Arduino/main.ino` file.
- Select the correct board and COM port.
- Upload the firmware to the Arduino.

### 3. Raspberry Pi Setup

Install the required Python library:

```bash
pip install pyserial
```

Run the teleoperation controller:

```bash
python3 teleop.py
```

### 4. Encoder Monitoring

Run the encoder monitoring script:

```bash
python3 encoder_receiver.py
```

The Arduino continuously sends encoder values in the following format:

```
<1254,1250,1249,1252>
```

Format:

```
<FrontLeft,FrontRight,RearLeft,RearRight>
```

### 5. Motion Commands

Use the following commands to control the rover:

| Command | Description |
|----------|-------------|
| F | Forward |
| B | Backward |
| TL | Tank Left |
| TR | Tank Right |
| PL | Pivot Left |
| PR | Pivot Right |
| CL | Curve Left |
| CR | Curve Right |
| S | Stop |

Example:

```
F,200
```

Moves the rover forward at PWM speed **200**.

---

## Future Features

- ROS2 Integration
- LiDAR-Based SLAM
- Autonomous Navigation
- PID Speed Control
- Quadrature Encoder Support
- Camera-Based Object Detection
- Obstacle Avoidance
- Battery Monitoring System
- MQTT Dashboard
- Warehouse Fleet Management
- QR Code Docking

---

## Acknowledgements

- Arduino for providing a reliable embedded development platform.
- Raspberry Pi Foundation for enabling affordable robotics computing.
- SmartElex for the motor driver used in this project.
- The ROS2 community for open-source robotics software.
- GitHub for project hosting and version control.
