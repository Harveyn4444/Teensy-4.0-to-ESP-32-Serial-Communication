# Teensy-4.0 to ESP 32 Serial Communication
 Communication between Teensy 4.0 and ESP32 using EasyTransfer.h

The use of this code is to transfer a data structure, containing whatever data you require, and sends this data over serial to an ESP 32 module
The data transfer is limited by the buffer size, which is 256 bytes for the ESP32 
Make changes tot he code to suit your variables, however the data structure on the Transmitter (Teensy 4.0) and Reciever (ESP32) must be the exact same or else ends up with corrupt messages, and the same serial baud rate (e.g 9600)
This code makes use of the EasyTransfer library found at <https://github.com/madsci1016/Arduino-EasyTransfer> with an installation guide
My code is merely an example sketch using their code, they are the creators
