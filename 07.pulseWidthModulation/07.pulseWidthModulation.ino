/*
  Author: l

  Learning Intention:
  The students will learn what 'pulse width modulation' is and how to use it to write
  analogue data on a digital PIN.
  
  Success Criteria:
    1.  I understand what pulse width modulation is
    2.  I can identify the PWM PINS on the Arduino Uno
    3.  I can wire an RGB LED for PWM control in TINKERCAD
    5.  I can write PWM data to multiple pins and manually change the colour of the LED

  Student Notes: 

  Documentation: 
    https://www.w3schools.com/colors/colors_rgb.aspt
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/07.pulseWidthModulation/Pulse-Width-Modulation.jpg
  Schematic:
    https://www.tinkercad.com/things/drNDsMxGMIY?sharecode=D6x4_xTTRl_zGs7B-XGqfbQhG_xgjj3TVS_c-GNTK-c
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/07.pulseWidthModulation/Bootcamp-PWMOutput.png
*/

static unsigned int redLED = 6;
static unsigned int onboardLED = 13;
static unsigned int buttonPIN = 4;
static unsigned int potPIN = A1;


//debounce parameters
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay= 100; // miliseconds
int lastButtonState = LOW;
int buttonState = LOW;
bool onSTATE = false;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial Monitor Configured for 9600");
  Serial.println("-----------------");
  pinMode(onboardLED, OUTPUT);
  pinMode(redLED, OUTPUT); 
  pinMode(buttonPIN, INPUT);  
  

}

void loop() {
  int reading = digitalRead(buttonPIN);

  // Check if button changed
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  // If enough time has passed (debounce)
  if ((millis() - lastDebounceTime) > debounceDelay) {
    // If button state changed, update debounced state
    if (reading != buttonState) {
      buttonState = reading;

      // Only toggle on a HIGH transition (button press)
        if (buttonState == HIGH) {
        onSTATE = !onSTATE;
      }
    }
  }


  if (reading == true) {
    onSTATE = !onSTATE;
  }

  lastButtonState = reading; // Save for next loop

  unsigned int dimmer = analogRead(potPIN);
  Serial.println(dimmer);
  dimmer = map(dimmer, 0, 255, 0 , 1023);

  if (onSTATE) {
  digitalWrite(onboardLED, dimmer);
  digitalWrite(redLED, dimmer);

  } else {
  digitalWrite(onboardLED, false);
  digitalWrite(redLED, false);
  }

    delay(10); // Small delay for stability

}
