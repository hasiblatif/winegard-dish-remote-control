
# Remote Controlling Winegard G1 Satellite Dish

> [!WARNING]
> I am just a beginner, please make sure to understand what you are doing before powering on the hardware to avoid any surprises.

## Introduction

I got inspiration to hack Winegard carryout satellite dish from Gabe (saveitforparts youtube channel) to control it for satellite reception. I found G1 model of Winegard dish 
from marketplace but I couldn't get it working using his technique as illustrated in [this video](https://www.youtube.com/watch?v=6kQa6nfUkIs), so I decided to 
make it remote controlled using Arduino, two stepper motor drivers and an infrared remote.

## Setup

Since the dish came with its own motors (Nema 17 and hybrid size 17 linear actuator), I just had to buy following hardware:
 - Aruino uno r3 (any model is fine) 
 - Infrared sensor (came with Arduino starter kit)
 - Remote (black-one came with Arduino starter kit)
 - 2 x TB6600 Stepper motor drivers
 - Couple of jumper wires

## Code 

Code has been shared in `arduino_code/arduino_code.ino`

## Diagrams

Note: JUmper wire colours mismatch when conected to motors (sorry!)

### Horizontal Motor Setup (NEMA 17 motor)
<img width="2000" height="3000" alt="nema1" src="https://github.com/user-attachments/assets/b8b93b40-8ffd-4899-ad73-23f355ddf049" />
<img width="2000" height="3000" alt="nema2pins" src="https://github.com/user-attachments/assets/5358249b-e75d-477d-929a-3992d42b225b" />

<img width="3000" height="2000" alt="nema3dirpins" src="https://github.com/user-attachments/assets/f7f46b3c-8742-4ce2-9168-415e67c9ad37" />

### Vertical Motor Setup (Linear actuator size 17)
<img width="2064" height="3080" alt="actuator1" src="https://github.com/user-attachments/assets/bd29b080-f051-4616-9efa-37394692f985" />
<img width="2000" height="3000" alt="nema1" src="https://github.com/user-attachments/assets/e2ed0f4a-5a01-4e9a-91af-45a65edd2aae" />
<img width="2064" height="3080" alt="actuator3pinsarduino" src="https://github.com/user-attachments/assets/87c77e83-77b1-4fa9-99a5-9064eb126598" />
<img width="2000" height="3000" alt="actuator2" src="https://github.com/user-attachments/assets/03f8e022-80b8-46dc-9f33-2e8b385b533e" />

## Working Video 

https://github.com/user-attachments/assets/0455db20-67af-442c-8e20-4cf363468d2f

## License 

The MIT License (MIT)
