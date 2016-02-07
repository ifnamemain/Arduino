/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

#include <Comm.h>

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

int t = 200; int num = 0; int cnt = 0;
char buf[10];
// the loop function runs over and over again forever
void loop() {
  if(Serial.available() > 0){
    num = Serial.readBytes(buf, 10);
    Serial.println(buf);
    Serial.println(num);
    cnt++;
    blink(num, t);    
    Serial.print("cnt: ");
    Serial.println(cnt);
  }
}

