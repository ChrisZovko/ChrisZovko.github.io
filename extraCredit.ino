//setting the momentary buttons to move the motor clockwise and counter clockwise
//potPin is the pin of the potentiometer
//buttonState is the status of the start-pause button
//cPin is the pin of the clockwise momentary button
//ccPin is the pin of the counterclockwise momentary button
void extraCredit(int buttonState, int cPin, int ccPin){
  if(digitalRead(cPin) == LOW){ //clockwise button is pressed
    lcd.setCursor(0, 0);
    lcd.print("Clockwise Rotation");
    //not sure if we want it to move 100 steps clockwise but can change number
    stepper.run();
    stepper.moveTo(stepper.currentPosition() + 100);
  }

  if(digitalRead(ccPin) == LOW){ //clockwise button is pressed
    lcd.setCursor(0, 0);
    lcd.print("Counterclockwise Rotation");
    //not sure if we want it to move 100 steps counterclockwise but can 
    //change number
    stepper.run();
    stepper.moveTo(stepper.currentPosition() - 100);
  }
  
}