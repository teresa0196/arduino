void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //activates serial connection and set baud rate to 9600
  Serial.setTimeout(10); // make Arduino to scan the serial buffer every ten milliseconds
  Serial.println("Hi! It's nice to see you:)"); // print the message in the separate line
  Serial.println("Send 'On' to turn on the LED."); // print the message in the separate line
  Serial.println("Send 'Off' to turn off the LED.");// print the message in the separate line
  pinMode(13, OUTPUT); // set pin 13 to output
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { // check if there is anything in the serial buffer 
    String command; // set 'command' to the variable
    command = Serial.readString(); // set 'command' to the input of the user
    if (command == "On") { // see if the user had typed "On"
      Serial.println("Turned on the light"); // print message in the separate line
      digitalWrite(13, HIGH); // set LED to turn on 
    }
    else if (command == "Off") { // see if the user had typed "Off"
      Serial.println("Turned off the light"); // print message in the separate line
      digitalWrite(13, LOW); // set  LED to turn on
    }
  }

}
