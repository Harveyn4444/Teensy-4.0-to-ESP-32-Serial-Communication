//For use with the ESP32 DEVKIT 1 so Hardware Serial may change 
#include <EasyTransfer.h>
#include <HardwareSerial.h>

//create object
EasyTransfer ET; 

HardwareSerial SerialPort(2); // use UART2

struct RECEIVE_DATA_STRUCTURE{
  //put your variable definitions here for the data you want to receive
  //THIS MUST BE EXACTLY THE SAME ON THE OTHER ARDUINO/Board
  int16_t number;
  char Text[16];  
};
//give a name to the group of data
RECEIVE_DATA_STRUCTURE RecievedData;

void setup() {
  //Starts Serial so user can see incoming data, may be removed if you want the ESP32 to work not plugged into a computer
  Serial.begin(9600);
  //Starts the second Serial interaction (Baud Rate, Serial Format, RX, TX )
  SerialPort.begin(115200, SERIAL_8N1, 16, 17); 
  ET.begin(details(RecievedData), &SerialPort);
  //Make sure to have Transmitter RX pin (Teensy 4.0) go to reciever TX pin (ESP32) and vice versa
}

void loop() {
  if(ET.receiveData()){ //If the data structure has been read, which is why it is important for the data struct to be the exact same!
    //this is how you access the variables. [name of the group].[variable name]
    //since we have data, we will print it out. 
    Serial.println(RecievedData.number);
    Serial.println(RecievedData.Text);
  }
}
