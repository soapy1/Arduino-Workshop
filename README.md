#Arduino Workshop
### GDI August 2015
[Slide decks](https://drive.google.com/folderview?id=0Bw_b4jiH4Zl1fmU3N3RJQlBqXzc3YzBYUlp0Rks4REt3S1VDRjFZaVM3YVdHMXNzb0haNFk&usp=sharing)

## Welcome
Our goal in this course is to give people a high level understanding of [Arduinos](https://www.arduino.cc/). This includes discussing
* circuits and architecture
* programming arduinos
* digital I/O
* analog I/O
* interrupts and timers
* serial communication and lcd screens

This repo has code examples and circuit diagrams (made using [Fritzing](http://fritzing.org/home/)) and is meant to be a jumping off point for those interested in starting with Arduinos.

## Getting setup
### Download and install the IDE
You can download and install the newest version of the arduino IDE here: 
https://www.arduino.cc/en/main/software
This should cover you if you have a Mac, Windows or Linux machine.

### Install other packages
Here is some more information about the IDE if you are interested. Most of this will also be covered in the class.
https://www.arduino.cc/en/Guide/Environment

#### [Mac](https://www.arduino.cc/en/Guide/MacOSX)
You don’t have to install anything else, just plug and play!

#### [Windows](https://www.arduino.cc/en/Guide/Windows)
For this you will need to wait until you have the Arduino Uno that will be provided with the course. So, you will have to wait until the day of to finish setting things up. Once you get your Arduino you should follow these steps:

* Plug in your board and wait for Windows to begin it's driver installation process. After a few moments, the process will fail, despite its best efforts
* Click on the Start Menu, and open up the Control Panel.
* While in the Control Panel, navigate to System and Security. Next, click on System. Once the System window is up, open the Device Manager.
* Look under Ports (COM & LPT). You should see an open port named "Arduino UNO (COMxx)". If there is no COM & LPT section, look under "Other Devices" for "Unknown Device".
* Right click on the "Arduino UNO (COmxx)" port and choose the "Update Driver Software" option.
* Next, choose the "Browse my computer for Driver software" option.
* Finally, navigate to and select the driver file named "arduino.inf", located in the "Drivers" folder of the Arduino Software download (not the "FTDI USB Drivers" sub-directory). If you are using an old version of the IDE (1.0.3 or older), choose the Uno driver file named "Arduino UNO.inf"
* Windows will finish up the driver installation from there.

#### [Linux](http://playground.arduino.cc/Learning/Linux)
You will need the package “arduino”.
```
sudo apt-get update && sudo apt-get install arduino arduino-core
``` 

