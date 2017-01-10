void setup() {
  pinMode(13, OUTPUT); //set pin to 13 to output
}

void loop() {
  digitalWrite(13, HIGH); //set LED to turn on
  delay(500); //set LED to turn on for half of a second
  digitalWrite(13, LOW); //set LED to turn off
  delay(500); //set LED to turn off for half of a second
  digitalWrite(13, HIGH);//set LED to turn on
  delay(1000); //set LED to turn on for one second
  digitalWrite(13, LOW);//set LED to turn off
  delay(1000); //set LED to turn off for one second
  digitalWrite(13, HIGH);//set LED to turn on
  delay(1500); //set LED to turn on for 1.5 second
  digitalWrite(13, LOW);//set LED to turn off
  delay(1500); //set LED to turn off for 1.5 second
  digitalWrite(13, HIGH);//set LED to turn on
  delay(2000); //set LED to turn on for two seconds
  digitalWrite(13, LOW);//set LED to turn off
  delay(2000); //set LED to turn off for two seconds
}
