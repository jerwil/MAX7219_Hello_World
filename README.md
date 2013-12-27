# MAX7219 7 segment LED driver board

A board to make using a MAX7219 & 7 segment display with Arduino projects easy and cheap!

![](https://raw.github.com/jerwil/MAX7219_Hello_World/master/Media/IMG_6559.JPG "In action")
![](https://raw.github.com/jerwil/MAX7219_Hello_World/master/Media/IMG_6572.JPG "Front view")
![](https://raw.github.com/jerwil/MAX7219_Hello_World/master/Media/IMG_6577.JPG "Back view")

The board on the top is the 2-sided version. The bottom board is single-sided

## Features

* Allows for simple hookup of an LED 7-segment 4 digit display to Arduino
* Requires 3 digital pins and 5V power
* Compact design

## Versions

* The single-sided version requires only a single-sided PCB, but jumpers must be used
* The double-sided version requires no jumpers but requires the ability to make dual-sided boards.

## Demo Video

* [Demo Video](http://youtu.be/nqQEoCIaSgE)

## Blog post

* [View the associated blog post here](http://www.jeremyadamwilson.com/max7219-lcd-driver-board/)

## Requirements

### Hardware

* Arduino
* MAX7219
* 1-sided or 2-sided copper board
* Resistor (see http://playground.arduino.cc/Main/MAX72XXHardware to choose)
* 10 mF capacitor
* 100 nF ceramic capacitor
* Headers

### Schematics

Single-sided:

![](https://raw.github.com/jerwil/MAX7219_Hello_World/master/Media/MAX7219%204x7%20Single%20Sided%20PCB_pcb.jpg "Single-sided schematic")

Double-sided:

![](https://raw.github.com/jerwil/MAX7219_Hello_World/master/Media/MAX7219%20Dual%20Sided%20PCB%20_pcb.jpg "Double-sided schematic")

See the included Fritzing diagram for details.

Thanks to [wayoda.org](http://www.wayoda.org/arduino/ledcontrol/index.html) for the useful guide.


