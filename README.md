# Smart Shoe

An Arduino-based obstacle-detecting shoe designed to help blind and visually impaired people sense objects in front of them.

## How it works
An ultrasonic sensor mounted on the toe measures the distance to objects ahead. A buzzer sounds when an obstacle is within a set distance, and beeps faster as the obstacle gets closer.

## Parts
- Elegoo UNO R3 (Arduino-compatible board)
- HC-SR04 ultrasonic sensor
- Active buzzer
- 9V battery with snap-on connector
- Jumper wires

## Wiring
| Component | Arduino pin |
|---|---|
| Buzzer + | 8 |
| Buzzer - | GND |
| Sensor VCC | 5V |
| Sensor Trig | 9 |
| Sensor Echo | 10 |
| Sensor GND | GND |

## Code
See `Smart-shoe.ino`.

## What I learned
- How an ultrasonic sensor measures distance by timing an echo
- How to control a buzzer so the beeping speeds up as an object gets closer
- Moving a circuit off a breadboard and mounting it on a shoe, including running it from a 9V battery
- Why a prototype needs testing in real conditions before anyone could rely on it

## Future improvements
- Smaller board (Arduino Nano) and a rechargeable battery
- Waterproof enclosure
- Vibration feedback instead of sound
- Testing with real users

*Prototype only. Not tested with blind users.*
