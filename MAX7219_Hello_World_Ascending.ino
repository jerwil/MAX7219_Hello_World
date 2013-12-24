//This program will cycle a 4-digit 7-segment display using a MAX7219 chip from 0-9999
//Based on code from http://www.wayoda.org/arduino/ledcontrol/index.html

#include <LedControl.h>

LedControl mydisplay = LedControl(2, 3, 4, 1); // The first 3 numbers are the pins used
int number_to_display = 1000;

void setup() {
  mydisplay.shutdown(0, false);  // turns on display
  mydisplay.setIntensity(0, 15); // 15 = brightest
}

void loop() {
  delay(10);
  number_to_display+=1;
  if (number_to_display >= 10000){number_to_display = 0;}
  printNumber(number_to_display);
}

void printNumber(int v) {
    int ones;
    int tens;
    int hundreds;
    int thousands;
    ones=v%10;
    v=v/10;
    tens=v%10;
    v=v/10;
    hundreds=v%10;
    v=v/10;
    thousands=v;			
    //Now print the number digit by digit
    mydisplay.setDigit(0,3,(byte)thousands,false);
    mydisplay.setDigit(0,2,(byte)hundreds,false);
    mydisplay.setDigit(0,1,(byte)tens,false);
    mydisplay.setDigit(0,0,(byte)ones,false);
}
