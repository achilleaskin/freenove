#include <wiringPi.h>
#include <stdio.h>
#define ledPin 0
#define buttonPin 1
//define the ledPin at the postion 0
//define the buttonPin at the position 1
int main(void)
{
  if(wiringPiSetup() == -1){ //when initialization for wiring fails, print message to screen
    printf("setup wiringPi failed !");
    return 1;
  }
  // setting the ledpin eleement as the output of the circuit
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pullUpDnControl(buttonPin, PUD_UP);
  //pull up to high level
  while(1){
    // digitalRead function return the type of the element is set in circuit rn
    if(digitalRead(buttonPin) == LOW){ //button has pressed down
      digitalWrite(ledPin, HIGH);
      //led on
      printf("led on...\n");
      }
    else {
      //button has released
      digitalWrite(ledPin, LOW);
      printf("...led off\n");
    }
  }
  return 0;
}
