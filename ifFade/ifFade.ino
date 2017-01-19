int lightValue = 0; // set 'lightValue' to 0
int delta = 1; // set 'delta' to 1

void setup() {
  Serial.begin(9600); // activate the serial connection
  pinMode(9, OUTPUT); // set pin 9 to output
}

void loop() {
  lightValue = lightValue + delta; // set the value of 'lightValue' to the sum of 'lightValue' and 'delta'
  if (lightValue <= 0 || lightValue >= 255) { // see if 'lightValue' is less or equal to 0 or greater or equal to 255
    delta = -delta; // set 'delta' to negative
  }
  Serial.println(lightValue); // print lightValue to the serial monitor
  analogWrite(9, lightValue); // set the brightness of the LED to the value of 'lightValue'
  delay(10); // wait for ten milliseconds
} 

