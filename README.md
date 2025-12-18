# Smart-Headlight-Intensity Control System 🚗

## 📌 Overview
The **Smart Headlight Intensity Control System** is an embedded automation project designed to improve night-driving safety by reducing glare caused by high-beam headlights. The system uses an **ESP32 microcontroller** along with an **LDR sensor** and an optional **LiDAR sensor** to automatically control headlight brightness based on ambient light conditions and the distance of oncoming vehicles.

When the surroundings are dark, the headlights operate at full brightness. When bright light or a nearby vehicle is detected, the system automatically dims the headlights to prevent glare, improving comfort and safety for all drivers.

---

## ⚙️ Features
- Automatic headlight brightness control  
- PWM-based smooth dimming using ESP32  
- Ambient light detection using LDR  
- MOSFET-based high-power LED control  
- Low-cost and energy-efficient design  
- Expandable to LiDAR-based adaptive beam control  

## 👥 Team Members
- **Aashish**
- **Kishore N S**
- **Aravind**
- **Praveen**
- **Adarsh**
- **Shanganidhi K N**


## 🛠 Hardware Requirements
- **ESP32 Development Board**
- **LDR (Light Dependent Resistor)**
- **10kΩ Resistor** (for voltage divider)
- **LiDAR Sensor (optional – VL53L0X)**
- **MOSFET** (IRLZ44N / IRFZ44N – logic-level recommended)
- **High-Power LED / Headlight**
- **1-Channel 5V Relay Module** (optional)
- Breadboard & jumper wires
- External power supply (for headlight)

## 💻 Software Requirements
- **Arduino IDE**
- **ESP32 Board Package**
- **Programming Language:** C++
- **Simulation Tool:** Wokwi (optional)

## 🔌 Pin Configuration (ESP32)
| Component | ESP32 Pin |
|---------|-----------|
| LDR Output | GPIO 34 (ADC) |
| MOSFET Gate (PWM) | GPIO 18 |
| Ground | GND |


## 🧠 Working Principle
1. The LDR senses ambient light intensity.
2. ESP32 reads the LDR value via ADC.
3. The value is mapped to a PWM duty cycle.
4. ESP32 outputs PWM to the MOSFET gate.
5. MOSFET controls the brightness of the headlight LED.
6. Headlight brightness adjusts automatically in real time.


## 📂 Repository Structure
Smart-Headlight-Intensity-Control/
│
├── code/
│ └── smart_headlight_pwm.ino
│
├── circuit/
│ ├── circuit_diagram.png
│ └── pin_connections.txt
│
├── docs/
│ ├── abstract.md
│ ├── methodology.md
│ └── future_scope.md
│
├── images/
│ ├── prototype.jpg
│ └── output_demo.jpg
│
└── README.md

## 🧪 Calibration
- Open Serial Monitor at **115200 baud**
- Note LDR values during **daylight** and **night**
- Adjust threshold or mapping values in the code for smooth dimming

## 🚀 Future Enhancements
- LiDAR-based distance-aware beam dimming
- Adaptive high/low beam switching
- IoT dashboard for monitoring
- CAN bus integration for automotive systems
- AI-based glare prediction


## 📜 License
This project is licensed under the **MIT License**.


⭐ *If you find this project useful, give it a star on GitHub!*
