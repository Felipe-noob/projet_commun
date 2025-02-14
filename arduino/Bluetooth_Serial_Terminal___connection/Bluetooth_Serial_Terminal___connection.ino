//CODED BY: LANZ CIMENI JUNE 20,2021
//PLEASE LIKE & SUBSCRIBE TO MY CHANNEL!
//CHECK OUT MY CHANNEL FOR MORE ARDUINO PROJECTS LIKE THIS!
//CLICK THIS! -> https://www.youtube.com/channel/UCMqbxIEpuyX_OJrA4BPbxXQ

#include <SoftwareSerial.h>
//No Library? No Problem! Click This! -> https://github.com/PaulStoffregen/SoftwareSerial
SoftwareSerial mySerial(9,8); // RX, TX

char w;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  delay(1000); //wait to start the device properly
}

void loop() {
  if (mySerial.available()) {
    w = mySerial.read();
    Serial.println(w);  //PC
    delay(10);
    //commands with Serial.println(); show on pc serial monitor
  }

  if (Serial.available()) {
    w = Serial.read();
    mySerial.println(w); //Phone
    delay(10);
    //commands with mySerial.println(); show on the device app
  }

//shown on pc
Serial.println("This is a test run");
Serial.println("Congratulations! Device Connected!");
Serial.println();

//shown on device app
mySerial.println("This is a test run");
mySerial.println("Congratulations! Device Connected!");
mySerial.println();

delay(2000);
}
