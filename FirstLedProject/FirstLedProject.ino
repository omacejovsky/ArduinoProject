int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT); //initialize Pin as Output
}

void loop() {
  digitalWrite(ledPin, HIGH); //output on LED
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
