/*
  Author: 

  Learning Intention:
  The students will learn how to wire a variable resistor as a pseudo sensor and read analogue
  data from that PIN.
  
  Success Criteria:
    1.  I can wire a variable resistor in TINKERCAD
    2.  I know how to read analogue data from a specific PIN
    3.  I know the range of analogue data
    4.  I can organise output data so it correctly plots on the serial monitor
    5.  I can apply this knowledge to the Light, Sound and Rotary Potentiometer in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/
  Schematic:
    https://www.tinkercad.com/things/97wMDip2Ata-bootcamp-analogueread/editel
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/05.analogueRead/Bootcamp-analogueRead.png
*/

static unsigned int myVariableResistor = A0;
unsigned int resistorValue;
static unsigned int OnBoardLED = 13;
static unsigned int LEDonPin8 = 8;

void setup() {
  Serial.begin(9600);
  // Analogue pins do not need to be configured unless you want to use one as a digital I/O
  pinMode(OnBoardLED, OUTPUT);
  pinMode(LEDonPin8, OUTPUT);
}

void loop() {
  Serial.print("myVariableResistor: ");
  resistorValue = analogRead(myVariableResistor);
  Serial.println(resistorValue);  
  int light = resistorValue;

  if (resistorValue >= 3) {
  digitalWrite(OnBoardLED, 0);
  digitalWrite(LEDonPin8, 1);
  } else {
  digitalWrite(OnBoardLED, 1);
  digitalWrite(LEDonPin8, 0);
  }
}

