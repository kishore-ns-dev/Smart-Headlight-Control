# Methodology

This project follows a simple sensor–processing–actuation approach to automatically control vehicle headlight intensity. The system continuously monitors ambient light conditions and the distance of oncoming vehicles, then adjusts the headlight brightness accordingly.

---

## 1. Ambient Light Detection (LDR)

An LDR (Light Dependent Resistor) is used to sense the surrounding light level.  
The LDR is connected in a voltage divider configuration, and the output voltage is read by the ESP32 through an ADC pin.

- In bright conditions (daylight or strong external light), the LDR resistance decreases.
- In dark conditions (night driving), the LDR resistance increases.

The ESP32 converts this analog value into a digital reading, which is later mapped to a suitable brightness level using PWM.

---

## 2. Distance Measurement (LiDAR)

A LiDAR sensor (VL53L0X) is used to measure the distance of oncoming vehicles.

- The sensor continuously measures the distance in millimeters.
- When a vehicle is detected within a predefined range, the system considers it a potential glare condition.
- If no vehicle is detected or the distance is large, normal brightness is maintained.

This helps reduce glare for other drivers without any manual intervention.

---

## 3. Data Processing (ESP32)

The ESP32 microcontroller acts as the central processing unit of the system.

- It reads the LDR value to understand ambient lighting.
- It reads the LiDAR distance to detect nearby vehicles.
- Both values are processed using simple mapping and comparison logic.

The final headlight brightness is decided by taking the safer value between ambient light control and distance-based dimming.

---

## 4. PWM-Based Brightness Control

Pulse Width Modulation (PWM) is used to control the headlight brightness smoothly.

- The ESP32 generates a PWM signal.
- This PWM signal is applied to the gate of a MOSFET.
- The MOSFET controls the current flowing through the high-power LED headlight.

PWM allows smooth dimming instead of sudden ON/OFF switching, which improves driving comfort.

---

## 5. Automatic Operation

The system works continuously and automatically once powered ON.

- Dark road + no nearby vehicle → High brightness
- Dark road + nearby vehicle → Reduced brightness
- Bright environment → Headlight dimmed or OFF

This automation improves night driving safety and reduces driver effort.

---

## Summary

By combining ambient light sensing and distance measurement, the system provides an intelligent and reliable headlight control solution. The use of simple sensors, ESP32 processing, and PWM-based control makes the design cost-effective, efficient, and suitable for real-world vehicle applications.
