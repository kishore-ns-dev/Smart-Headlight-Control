/*
  Smart Headlight Intensity Control System
  ---------------------------------------
  Controller : ESP32
  Sensor     : LDR (Ambient Light Detection)
  Output     : High Power LED via MOSFET
  Control    : PWM Dimming

  Description:
  This program automatically adjusts the headlight brightness
  based on surrounding light conditions. In dark environments,
  the headlight brightness increases, and in bright conditions,
  it gradually dims to reduce glare.

  Author: Kishore & Team
*/

#define LDR_PIN 34      // ADC pin connected to LDR voltage divider
#define LED_PIN 18      // PWM output pin connected to MOSFET gate

// PWM configuration for ESP32
#define PWM_CHANNEL 0
#define PWM_FREQ 5000        // 5 kHz PWM frequency
#define PWM_RESOLUTION 8     // 8-bit resolution (0–255)

// LDR calibration values (adjust after testing)
int LDR_BRIGHT = 500;   // Day / bright light
int LDR_DARK   = 3000;  // Night / low light

void setup() {
  Serial.begin(115200);

  // Setup PWM channel
  ledcSetup(PWM_CHANNEL, PWM_FREQ, PWM_RESOLUTION);
  ledcAttachPin(LED_PIN, PWM_CHANNEL);

  Serial.println("Smart Headlight System Initialized");
}

void loop() {
  // Read ambient light value
  int ldrValue = analogRead(LDR_PIN);

  // Convert LDR value to PWM brightness
  int brightness = map(ldrValue, LDR_BRIGHT, LDR_DARK, 0, 255);
  brightness = constrain(brightness, 0, 255);

  // Apply PWM to MOSFET
  ledcWrite(PWM_CHANNEL, brightness);

  // Debug output
  Serial.print("LDR Value: ");
  Serial.print(ldrValue);
  Serial.print(" | Headlight PWM: ");
  Serial.println(brightness);

  delay(100);
}
