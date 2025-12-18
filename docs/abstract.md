# Abstract

Glare from high-beam headlights is one of the major causes of discomfort and accidents during night driving. Manual switching between high and low beams depends on driver awareness and reaction time, which is often unreliable in real-world conditions. This project proposes a **Smart Headlight Intensity Control System** that automatically adjusts headlight brightness to improve driving safety and comfort.

The system uses an **ESP32 microcontroller** along with an **LDR sensor** to detect ambient light conditions and a **LiDAR sensor** to measure the distance of oncoming vehicles. Based on these inputs, the ESP32 dynamically controls the headlight intensity using **PWM (Pulse Width Modulation)** through a MOSFET driver. When the surroundings are dark and no vehicle is nearby, the headlight operates at full brightness. When a vehicle approaches or strong light is detected, the system automatically dims the headlight to reduce glare.

The proposed system is cost-effective, energy-efficient, and fully automatic, requiring no manual intervention from the driver. It demonstrates how simple sensors and embedded control can be combined to create intelligent automotive safety solutions and can be further extended for advanced adaptive lighting systems.
