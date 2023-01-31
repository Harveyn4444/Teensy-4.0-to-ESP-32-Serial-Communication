//For use with a Teensy 4.0 Module - other modules the RX and TX pins may differ
#include <EasyTransfer.h>
//Libraries used for the Teensy Serial port
#define HWSERIAL Serial3
#include <Wire.h>

struct SEND_DATA_STRUCTURE{
  //put your variable definitions here for the data you want to send
  //THIS MUST BE EXACTLY THE SAME ON THE OTHER ARDUINO
  int16_t number;
  char Text[16] = "Hello World";

};
//give a name to the group of data
SEND_DATA_STRUCTURE SendData;

//create object
EasyTransfer ET; 

//Variable used to keep track of the latest sent message
int i = 1;

void setup() {
  Wire.begin();
  //Serial here is different from the reciever just so on the same computer they do no interfere
  Serial.begin(19200);
  //This abud rate must be the same as the reciever "SerialPort" not the standard serial
  HWSERIAL.begin(115200);
  ET.begin(details(SendData), &Serial3);
  //Make sure to have Transmitter RX pin (Teensy 4.0) go to reciever TX pin (ESP32) and vice versa
  Serial.println("START");
}

void loop() {
  SendData.number = i;
  ET.sendData();
  //This will print the data structure to serial
  //This just shows what was sent 
  Serial.print("Sent ");Serial.print(SendData.number);Serial.print(",");Serial.println(SendData.Text);
  //Increasing the counter
  i++;
  delay(1000);
}
