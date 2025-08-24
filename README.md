
# Arduino Parking / Proximity Sensor 🚗🔊

This project is an Arduino-based parking/proximity sensor that helps detect nearby obstacles.
It uses an **ultrasonic distance sensor**, an **RGB LED**, and a **passive buzzer** to give both
visual and audio feedback based on distance.

## Features
- Measures distance using ultrasonic sensor
- RGB LED changes color (green → yellow → red) as you get closer
- Buzzer beeps faster as distance decreases
- Compact, low-cost design for educational use

## Hardware
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- RGB LED (common cathode/anode)
- Passive Buzzer
- Breadboard & jumper wires

## How It Works
1. The ultrasonic sensor measures the distance to an obstacle.
2. The RGB LED provides a color-coded visual warning:
   - **Green**: Safe
   - **Yellow**: Getting close
   - **Red**: Too close
3. The buzzer increases beeping speed as the object approaches, leading to a constant beep when an unsafe distance is reached.
