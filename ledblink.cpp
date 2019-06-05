#include <wiringPi.h>
#include <stdio.h>
// that tells the system tha circuit starts from GPIO17
#define ledPin 0
int main(void){
  if(wiringPiSetup() == -1){ //when initialize wiring failed, print message to screen
    printf("setup wiringPi failed !");
    return 1;
  }
  //when initialize wiring successfully, print message to screen
  printf("wiringPi initialize successfully, GPIO %d(wiringPi pin)\n",ledPin);
  //printMode function is declaring the name of the element and also the type of it
  //if is OUTPUT or INPUT
  pinMode(ledPin, OUTPUT);
  while(1){
    //digitalWrite function is making the ledpin output to blink
    digitalWrite(ledPin, HIGH);
    //led on
    printf("led on...\n");
    delay(1000);
    digitalWrite(ledPin, LOW);
    printf("...led off\n");
    delay(1000);
  }
  return 0;
}
