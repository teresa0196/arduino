void setup() {
  Serial.begin(9600); // activate the serial connection
  pinMode(9, OUTPUT); // set pin 9 to output 
}

void loop() {
  for (int lightValue = 0; lightValue <= 255; lightValue++) { // set lightValue to 0 and increase it until it is equal to 255
    analogWrite(9, lightValue); // set the brightness of the LED to the lightValue
    Serial.println(lightValue); // print lightValue to the serial monitor
    delay(10); // wait for ten milliseconds
  }
  for (int lightValue = 255; lightValue >= 0; lightValue--) { // set lightValue to 255 and decrease it until it is equal to 0
    analogWrite(9, lightValue); // set the brightness of the LED to the lightValue
    Serial.println(lightValue); // print lightValue to the serial monitor
    delay(10); // wait for ten milliseconds
  } 
}
