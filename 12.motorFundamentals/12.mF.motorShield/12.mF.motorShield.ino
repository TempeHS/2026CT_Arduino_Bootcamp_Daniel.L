/*
  Author: 
  Learning Intention:
  The students will learn how to wire two motors to an H-Bridge controller and
  control the motor's speed and direction.

  Success Criteria:
    1.  I understand what an H-Bridge is and what it does
    2.  I can fit the shield correctly to the Arduino
    2.  I can manually write different directions and speeds to two motors
    3.  I understand the advantages and disadvantages of a continuous servo over a motor and H bridge
    4.  Understand the importance of only connecting an external battery when the Arduino is disconnected from the computer

  Student Notes: 

  Documentation: 
    https://docs.arduino.cc/tutorials/motor-shield-rev3/msr3-controlling-dc-motor

  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/12.motorFundamentals/12.mF.motorShield/12.mF.motorShield.png
*/

static unsigned int leftDirectionPin = 12;
static unsigned int leftSpeedPin = 3;
static unsigned int leftBrakePin = 9;

static unsigned int rightDirectionPin = 13;
static unsigned int rightSpeedPin = 11;
static unsigned int rightBrakePin = 8;

bool directionState = false;

void setup() {
  //define pins
  pinMode(leftDirectionPin, OUTPUT);
  pinMode(leftSpeedPin, OUTPUT);S
  pinMode(leftBrakePin, OUTPUT);
  pinMode(rightDirectionPin, OUTPUT);
  pinMode(rightSpeedPin, OUTPUT);
  pinMode(rightBrakePin, OUTPUT);
}

void loop() {
  //change direction every loop
  directionState = !directionState;
  digitalWrite(leftDirectionPin, directionState);
  digitalWrite(rightDirectionPin, directionState); //if motors are wired oposing make !directionState

  //release breaks
  digitalWrite(leftBrakePin, LOW);
  digitalWrite(rightBrakePin, LOW);

  //set work duty for the motor
  analogWrite(leftSpeedPin, 30);
  analogWrite(rightSpeedPin, 30);
  delay(2000);

  //activate breaks
  digitalWrite(leftBrakePin, HIGH);
  digitalWrite(rightBrakePin, HIGH);

  //set work duty for the motor to 0 (off)
  analogWrite(leftSpeedPin, 0);
  analogWrite(rightSpeedPin, 0);

  delay(2000);
}