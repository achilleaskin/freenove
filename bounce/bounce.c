#include <wiringPi.h>
#include <stdio.h>
#define ledPin 0 //define the led Pin
#define buttonPin 1 //define the button Pin
/* we have to store some elements :
*/
int ledState=LOW; //store the State of led
int buttonState=HIGH; //store the State of button
int lastbuttonState=HIGH;//store the lastState of button
long lastChangeTime; //store the change time of button state
long captureTime=50; //set the button state stable time
int reading;
int main(void){
  if(wiringPiSetup() == -1){ //when initialize wiring failed,print message to screen
    printf("setup wiringPi failed !");
    return 1;
  }
  printf("Program is starting...\n");
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pullUpDnControl(buttonPin, PUD_UP);
  //pull up to high level
  while(1){
    reading = digitalRead(buttonPin); //read the current state of button
    if( reading != lastbuttonState){
      time point
      lastChangeTime = millis();
    }
