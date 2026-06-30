# ESP32 Analog Input and PWM

## Overview

This repository contains ESP32 projects demonstrating Analog-to-Digital Conversion (ADC) and Pulse Width Modulation (PWM). These projects focus on controlling LED brightness using analog input and predefined brightness values.

---

# Project 1: Potentiometer LED Brightness Control

## Description

This project demonstrates how to control the brightness of an LED using a potentiometer connected to the ESP32. The ESP32 reads the analog voltage from the potentiometer through its ADC and adjusts the LED brightness according to the input value using `analogWrite()`.

## Components Used

- ESP32 Development Board
- Potentiometer (10kΩ)
- LED
- Breadboard
- Jumper Wires

## Working

- The potentiometer acts as a variable voltage source.
- The ESP32 reads the analog value using its ADC.
- The analog value is used to control the LED brightness.
- Rotating the potentiometer increases or decreases the LED brightness.
- Watch implementation here: https://drive.google.com/file/d/1Y_ScLJJGv4p1A7ZwzV6meI8bURz5bucd/view?usp=sharing

## Concepts Covered

- Analog-to-Digital Conversion (ADC)
- Analog Input Reading
- LED Brightness Control
- PWM Basics

## Applications

- Light Dimmers
- Brightness Controllers
- Analog Sensor Interfacing
- Home Automation

---

# Project 2: Three LED Brightness Control

## Description

This project demonstrates simultaneous brightness control of three LEDs using the ESP32. The program assigns predefined brightness values to all three LEDs, allowing them to operate at the same brightness level simultaneously.

## Components Used

- ESP32 Development Board
- 3 LEDs
- Breadboard
- Jumper Wires

## Working

- Three LEDs are connected to different GPIO pins.
- The ESP32 assigns predefined brightness values using `analogWrite()`.
- All three LEDs change brightness simultaneously.
- Watch implementation here: https://drive.google.com/file/d/12c2O8Z-lkfSDXIxUajgmdQjR-iglDfrB/view?usp=sharing

## Concepts Covered

- GPIO Output
- LED Brightness Control
- Multi-LED Programming
- PWM Basics

## Applications

- Decorative Lighting
- LED Testing
- Embedded Systems Learning
- Multi-Output LED Control

---

## Software Used

- Arduino IDE
- ESP32 Board Package

---

## Author

**Geetha Pallavi**  
B.Tech (ECE) 
