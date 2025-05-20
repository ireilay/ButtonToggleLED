const int buttonPin = 2;
const int ledPin = 13;

bool ledState = false;
bool lastButtonState = LOW;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading == HIGH && lastButtonState == LOW) {
      ledState = !ledState;
      digitalWrite(ledPin, ledState ? HIGH : LOW);
    }
  }

  lastButtonState = reading;
}
