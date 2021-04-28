# PIR_SENSOR_based_Security_Alarm_System
#### Introduction

With the number of crimes increasing everyday, the need for security alarm system is a serious demand nowadays. Since, the high end security systems present in the market are not that affordable, so it is intended to provide a solution by constructing a cost efficient electronic system that has the capability of sensing the motion of any warm blooded object and setting off the alarm. 
PIR i.e. Passive Infrared Radiation sensor based security system is being introduced which can be used to save power consumption as well as to provide low cost implementation and effective management with small memory space of the recording system. Here, PIR sensor is used in place of transmitter or, receiver. PIR sensor can easily detect any change in infrared radiation levels when an intruder or, human passes through its detection range. After detection it produces a digital output that is applied to the Arduino UNO. Depending on the change in infrared radiation levels, certain changes in voltages will occur and then with this voltage the signal will be amplified and hence the sound will be produced. 

#### Components
The designed system consists of 
1. Arduino UNO, 
2. PIR sensor, 
3. UM3561 IC, 
4. Speaker, 
5. Transistor, 
6. A couple of resistors. 

#### Mechanical Details
The UM3561 IC is a Siren generator IC. It has 8 pins. First and sixth pins are the Sound effect selection Pins. Based on how they are connected. Based on the connection, one can choose between 4 different types of sounds.

In this project, both Pin 1 and Pin 6 are used to produce a Police Siren. Pin 5 is connected to +5V through an NPN Transistor (which is activated by Pin 4 of Arduino UNO).

One end of the 220KΩ resistor is connected to the seventh pin of the UM3561 IC and the other end is connected to the eighth pin of the IC. Output is taken from the third pin of the IC and it is connected to a speaker through a resistor and transistor.

The base of the transistor is connected to the output of the IC through a resistor of 10KΩ. Emitter pin is connected to the ground while one end of the speaker is connected to the collector, while the other end is connected to +5V.

Coming to the PIR Sensor, its output is connected to Pin 3 of Arduino.

#### Applications
This can be used in the museums to protect the valuable things.

This can also be used as an automatic door bell circuit that rings the bell when human is detected.

This can be used in defense applications to detect the humans in war field.

This can be used in toy applications that produce sound.

