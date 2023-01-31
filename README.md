# Teensy-4.0 to ESP 32 Serial Communication
 Communication between Teensy 4.0 and ESP32 using EasyTransfer.h

The use of this code is to transfer a data structure, containing whatever data you require, and sends this data over serial to an ESP 32 module
The data transfer is limited by the buffer size, which is 256 bytes for the ESP32 
Make changes tot he code to suit your variables, however the data structure on the Transmitter (Teensy 4.0) and Reciever (ESP32) must be the exact same or else ends up with corrupt messages, and the same serial baud rate (e.g 9600)
This code makes use of the EasyTransfer library found at <https://github.com/madsci1016/Arduino-EasyTransfer> with an installation guide
My code is merely an example sketch using their code, they are the creators.

Included is some basic examples and some example using some popular sensors

ESP 32 DEV KIT 1 Pinout Diagram 

![image](https://user-images.githubusercontent.com/73143248/215633329-e2ac5d06-456c-49dc-b25c-3e21d96c74ad.png)

Teensy 4.0 Pinout Diagram

![image](https://user-images.githubusercontent.com/73143248/215633431-0ab12ae5-55e5-4507-908d-c04db1cf5576.png)
