void setup() {
  pinMode(12, OUTPUT); //set pin to 13 to output
}

void loop() {
  digitalWrite(12, HIGH); //set LED to turn on
  delay(500); //set LED to turn on for half of a second
  digitalWrite(12, LOW); //set LED to turn off
  delay(500); //set LED to turn off for half of a second

}
