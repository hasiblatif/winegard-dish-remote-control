#include <IRremote.hpp>
// I am using black remote from Arduino starter kit and IR receiver
// Motor drives for both motors are TB6600 
// For horizontal movement we are using NEMA 17 stepper motor
// For vertical movement hybrid linear actuator stepper motor of size 17 is being used

#define IR_RECEIVE_PIN 4 //  remote receive pin
// Define stepper motor connections:
#define horizontal_dir_pin 2 // DIR pin for horizontol motor
#define horizontal_step_pin 3 // STEP pin for horizontol motor
#define vertical_pulse_pin 7 // PUL pin for vertical motor 
#define vertical_dir_pin 6 // DIR pin for vertical motor
#define vertical_ena_pin 5 // ENA pin for vertical motor

void setup()
{
  Serial.begin(9600);  // Establish serial communication
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver

  pinMode(horizontal_step_pin, OUTPUT);
  pinMode(horizontal_dir_pin, OUTPUT);
  pinMode(vertical_pulse_pin, OUTPUT);
  pinMode(vertical_dir_pin, OUTPUT);
  pinMode(vertical_ena_pin, OUTPUT);

}

void loop() {
  if (IrReceiver.decode()) {
      Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); // Print "old" raw data
      IrReceiver.printIRResultShort(&Serial); // Print complete received data in one line
      
       switch (IrReceiver.decodedIRData.decodedRawData) {
        case 0xB946FF00: // up volume on 
          Serial.println("up vol pressed");
          drive_up();
          break;
        case 0xEA15FF00: // down vol
          Serial.println("down vol pressed");
          // move vertically down
          drive_down();
          break;
        case 0xBC43FF00: // right or gorward
          Serial.println("forward or right pressed");
          // move horizontol clockwise
          rotate_cw();
          break;
        case 0xBB44FF00: // left or reverse
          Serial.println("reverse or left pressed");
          // move horizontal counter clockwise
          rotate_ccw();
          break;
        default:
          break;
      }
     
    }
    IrReceiver.resume(); 
}

void rotate_cw()
 {
  digitalWrite(horizontal_dir_pin, HIGH);
  for(int i=0; i < 500; i++) 
  {
  drive_motor();
  } 
   
}

void rotate_ccw()
 {
  digitalWrite(horizontal_dir_pin, LOW);
  for(int i=0; i < 500; i++)
  {
  drive_motor();
  } 
   
}

void drive_motor()
{
  digitalWrite(horizontal_step_pin, HIGH);
  delayMicroseconds(100);
  digitalWrite(horizontal_step_pin, LOW);
  delayMicroseconds(100);  
}

void drive_up()
{
  for (int i=0; i<500; i++) 
  {
    digitalWrite(vertical_dir_pin, HIGH);
    digitalWrite(vertical_ena_pin, HIGH);
    digitalWrite(vertical_pulse_pin, HIGH);
    delayMicroseconds(100);
    digitalWrite(vertical_pulse_pin, LOW);
    delayMicroseconds(100);
    digitalWrite(vertical_ena_pin, LOW);
 }
  
}

void drive_down()
{
  for (int i=0; i<500; i++) //Forward 5000 steps
 {
    digitalWrite(vertical_dir_pin, LOW);
    digitalWrite(vertical_ena_pin, HIGH);
    digitalWrite(vertical_pulse_pin, HIGH);
    delayMicroseconds(100);
    digitalWrite(vertical_pulse_pin, LOW);
    delayMicroseconds(100);
    digitalWrite(vertical_ena_pin, LOW);
 }
}
