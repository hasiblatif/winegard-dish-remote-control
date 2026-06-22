
# Remote Controlling Winegard G1 Satellite Dish

> [!WARNING]
> I am just a beginner, please make sure to understand what you are doing before powering on the hardware to avoid any surprises.

## Introduction

I got inspiration to hack Winegard carryout satellite dish from Gabe (saveitforparts youtube channel) to control it for satellite reception. I found G1 model of Winegard dish 
from marketplace but I couldn't get it working using his technique as illustrated in [this video](https://www.youtube.com/watch?v=6kQa6nfUkIs), so I decided to 
make it remote controlled using Arduino, two stepper motor drivers and an infrared remote.

## Setup

Since the dish came with its own motors (Nema 17 and hybrid size 17 linear actuator), I just disconnected the motors from the motherboard and bought following hardware to drive the motors with the help of a basic infrared transmitter and receiver that came with an Arduino starter kit:

 - Aruino uno r3 (any model is fine) 
 - Infrared sensor (came with Arduino starter kit)
 - Remote (black-one came with Arduino starter kit)
 - 2 x TB6600 Stepper motor drivers
 - Couple of jumper wires

## Code 

Arduino code has been shared in `arduino_code/arduino_code.ino`. Please update loops to fit your step size/revolution of the motors.

## Diagrams

Note: Jumper wire colors mismatch when conected to motors (sorry!)

### Horizontal Motor Setup (NEMA 17 motor)
<img width="2000" height="3000" alt="nema1" src="https://github.com/user-attachments/assets/b8b93b40-8ffd-4899-ad73-23f355ddf049" />

<img width="2000" height="3000" alt="nema2pins" src="https://github.com/user-attachments/assets/5358249b-e75d-477d-929a-3992d42b225b" />


### Vertical Motor Setup (Linear actuator size 17)
I found [this datasheet article](https://www.haydonkerkpittman.com/-/media/ametekhaydonkerk/downloads/data-sheets/hybrid-stepper-linear/haydon-43000-sng-data.pdf?la=en&revision=17bf0e72-af6a-4837-9a89-31a514841fc9)
helpful for this motor. For this motor I used code given in [this article](https://www.handsontec.com/dataspecs/module/TB6600-Motor-Driver.pdf) 

<img width="2064" height="3080" alt="actuator1" src="https://github.com/user-attachments/assets/bd29b080-f051-4616-9efa-37394692f985" />
<img width="2064" height="3080" alt="actuator3pinsarduino" src="https://github.com/user-attachments/assets/87c77e83-77b1-4fa9-99a5-9064eb126598" />
<img width="2000" height="3000" alt="actuator2" src="https://github.com/user-attachments/assets/03f8e022-80b8-46dc-9f33-2e8b385b533e" />

## Infrared Transmitter-Receiver

I used black remote that came with Elegoo starer kit and looks like this. YOu can find many tutorials to get started with this IR transmitter and receiver.
<img width="4000" height="3000" alt="IR" src="https://github.com/user-attachments/assets/5a11ac66-3cfc-4097-acc2-bc7dddde0a09" />

## Working Video 

https://github.com/user-attachments/assets/0455db20-67af-442c-8e20-4cf363468d2f

## License 

The MIT License (MIT)
