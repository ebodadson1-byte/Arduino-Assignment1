int startValue = 10;
int ledPin = 13;
int flashDelay = 150;

void flashLED(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH);
    delay(flashDelay);
    digitalWrite(ledPin, LOW);
    delay(flashDelay);
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== Smart Countdown Starting ===");
  Serial.print("Counting down from: ");
  Serial.println(startValue);

  for (int count = startValue; count > 0; count--) {
    Serial.print("Count: ");
    Serial.println(count);
    flashLED(count);
    delay(800);
  }

  Serial.println("=== Countdown Complete ===");
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  Serial.println("=== Done ===");
}

void loop() {
}