void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
  Serial.println("Hi! It's nice to see you:)");
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    String command;
    command = Serial.readString();
    if (command == "On") {
      Serial.println("Turned on the light");
      digitalWrite(13, HIGH);
    }
    else if (command == "Off") {
      Serial.println("Turned off the light");
      digitalWrite(13, LOW);
    }
  }

}
