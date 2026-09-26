// Activity 2 intermediate version after Issue #1 fix
const int LED_PIN = 13;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // ISSUE #4 remains: Serial.begin() is missing
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  Serial.println("LED ON");      // ISSUE #3 remains
  delay(2000);                   // ISSUE #2 remains
}