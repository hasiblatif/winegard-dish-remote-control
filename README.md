
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

### Horizontal Motor Setup (NEMA 17 motor)
<img width="3000" height="4000" alt="nema1" src="https://github.com/user-attachments/assets/b8b93b40-8ffd-4899-ad73-23f355ddf049" />
### Vertical Motor Setup (Linear actuator size 17)


## License 

MIT license
