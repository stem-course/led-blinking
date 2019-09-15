/*
Code by:
M.Hashir

This is a code that blinks LED on pin 13 of Arduino

Hardware:
-Arduino (Can be purchased from www.munphurid.com)

*/

int led = 13;    //LED is connected to pin 13 of Arduino

void setup() {
pinMode(led,OUTPUT);      //Do not edit this line
}

void loop() {
digitalWrite(led,HIGH);     //Turn on led

delay(3000);                  //wait 

digitalWrite(led,LOW);      //Turn off led

delay(4000);                  //wait

  //now go to the start of void loop()

}
