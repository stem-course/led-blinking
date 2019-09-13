int led = 13;    //LED is connected to pin 13 of Arduino
int buzzzer = 14  /Buzzer is connectred to pin 14

void setup() 
  pinMode(led, OUTPUT);     //Do not edit this line
  pinMode(Buzzer , OUTPUT); //Do not edit this line
}

void loop() {
  digitalWrite(led, HIGH);    //Turn on led
  digitalWrite(buzzer, LOW); //Turn off buzzer
  delay(3000);                  //wait

  digitalWrite(led, LOW);     //Turn off led
  digitalWrite(buzzzer, HIGH); //Turn on the buzzer
  delay(4000);                  //wait

  //now go to the start of void loop()

}
