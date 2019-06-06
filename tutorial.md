# Libraries

  * wiringPi.h
  * stdio.h

# Pre-conditions
  * #define $(name_of_element) $(position on board)

# Functions
  * int wrtingPiSetup() :
  > Returns -1 if the wired are failed pluged.

  * void printMode(int pin, int mode)
    > sets the element to ouput or input.

  * void digitalWrite(int pin, int value)
    > sets the pin in first reference to the value is passed as the second

## Debounce for push button
> When the button is pressed the time between the button to be fully pressed and when is pressed the status of the circuit doesn't change immideatly but in-between we have bounce between high and low.
