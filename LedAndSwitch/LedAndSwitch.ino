int switchPin = 8;
int ledPin = 11;
boolean lastButton = LOW;
boolean currentButton = LOW;
int ledLevel = 0;

void setup() {
  pinMode(switchPin, INPUT); //initialize Switch as Input
  pinMode(ledPin, OUTPUT); //initialize Pin as Output
}

void loop() {
  currentButton = debounce(lastButton);

  if (lastButton == LOW && currentButton == HIGH) {    //button pressed
    ledLevel = ledLevel + random(255);
  }
  lastButton = currentButton;

  if (ledLevel > 255) ledLevel = 0;
  analogWrite(ledPin, ledLevel);
}

boolean debounce(boolean last)  {
  boolean current = digitalRead(switchPin);
  if (last != current)
  {
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
  }

