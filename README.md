# Smart Shoe

An Arduino-based obstacle-detecting shoe designed to help blind and visually impaired people sense objects in front of them.

## How it works
An ultrasonic sensor mounted on the toe measures the distance to objects ahead. A buzzer sounds when an obstacle is within a set distance, and beeps faster as the obstacle gets closer.

## Photos

<img width="576" height="1024" alt="Picture 1" src="https://github.com/user-attachments/assets/2b543b72-45d7-4b5c-87c2-60132b9328ac" />
<img width="576" height="1024" alt="Picture 2" src="https://github.com/user-attachments/assets/a6e951f7-fed4-43ba-b50e-f1a2fa6beec7" />
<img width="576" height="1024" alt="Picture 3" src="https://github.com/user-attachments/assets/c3c7a909-3c56-4bda-b60d-0f217190da2e" />

## Video

https://github.com/user-attachments/assets/465b6784-b3c7-40b7-99c5-980032869270

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
