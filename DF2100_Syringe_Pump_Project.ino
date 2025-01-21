#include <AccelStepper.h>
#include <LiquidCrystal_I2C.h>
#define PI 3.1415926535897932


LiquidCrystal_I2C lcd(0x27, 16, 2);

//RGB Pins (for LED)
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

//pin that the NC pin on the limit switch is connected to on the Arduino
int switchPin = 0;//change
//pin that the step pin in the motor is connected to
int stepPin = 3;
//pin that the dir (direction) pin in the motor is connected to
int dirPin = 2;
//pin that the on/off button for the device is connected to
int buttonPin = 4;

//pin that the clockwise momentary button is connected to (xc)
int cMButtonPin = 1; //change
//pin that the counterclockwise momentary button is connected to (xc)
int ccMButtonPin = 1; //change
//pin that the potentiometer is connected to 
int potPin = A0;

//input flow rate selected by potentiometer, in mL/min
//must work between 0.1 and 5 mL/min for grading purposes
float inputFlowRate;
//flow rate in steps/sec calculated by the inputFlowRate
float stepperFlowRate;

AccelStepper stepper(AccelStepper::DRIVER, stepPin, dirPin);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(switchPin, INPUT_PULLUP);
  pinMode(buttonPin, INPUT_PULLUP);

  pinMode(cMButtonPin, INPUT_PULLUP);
  pinMode(ccMButtonPin, INPUT_PULLUP);

  stepper.setMaxSpeed(1000); //steps per second
  stepper.setAcceleration(500); //may need to change based on instructions
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin);
  int switchState = digitalRead(switchPin);
  
  setRGB(switchState, buttonPin);
  extraCredit(buttonState, cMButtonPin, ccMButtonPin);
  setLCD(buttonState, switchState, potPin);
}
