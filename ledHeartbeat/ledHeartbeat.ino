// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < 5000; i+=60) {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(5000 - i);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delayMicroseconds(5000 + i); // wait for a second
}
  for (int i = 5000; i > 0; i-=60) {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(5000 - i);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delayMicroseconds(5000 + i); // wait for a second
}
}
