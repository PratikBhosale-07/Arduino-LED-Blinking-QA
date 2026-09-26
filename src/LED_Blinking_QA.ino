// Activity 2 baseline version (intentionally contains QA issues for the exercise)
const int LED_PIN = 13;

void setup() {
  pinMode(LED_PIN, INPUT);       // ISSUE #1: should be OUTPUT
  // ISSUE #4: Serial.begin() is missing
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  Serial.println("LED ON");      // ISSUE #3: message does not match actual state
  delay(2000);                   // ISSUE #2: OFF time is 2 seconds, not 1 second
}