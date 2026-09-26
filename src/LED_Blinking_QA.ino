// Activity 2 intermediate version after Issues #1, #2 and #3 fixes
const int LED_PIN = 13;
const unsigned long BLINK_INTERVAL_MS = 1000;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // ISSUE #4 remains: Serial.begin() is missing
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED ON");
  delay(BLINK_INTERVAL_MS);

  digitalWrite(LED_PIN, LOW);
  Serial.println("LED OFF");
  delay(BLINK_INTERVAL_MS);
}