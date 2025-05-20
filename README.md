# ButtonToggleLED - Embedded Starter Project

## Overview
This is a simple embedded systems project using Arduino. It reads a button press and toggles an LED ON or OFF.

## Hardware
- Arduino uno
- Push button
- LED (with 220Ω resistor)
- 10kΩ resistor (for button pull-down)

## Wiring
- LED long leg → Pin 13
- LED short leg → 220Ω resistor → GND
- Button one side → Pin 2
- Button other side → 5V
- 10kΩ resistor from Pin 2 → GND

## Code
- Uses debounce to avoid multiple triggering on button press
- Toggles LED state each time button is pressed

## How to Use
1. Connect hardware as described.
2. Upload the code to your Arduino.
3. Press the button to toggle LED ON/OFF.

## What I Learned
- Reading digital inputs on MCU
- Implementing debounce logic
- Controlling outputs (LED)
- Basic state management in embedded C++
