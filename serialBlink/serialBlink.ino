void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hi! It's nice to see you:)");
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(1000);
  Serial.println("On");
  digitalWrite(13, LOW);
  delay(1000);
  Serial.println("Off");
}
