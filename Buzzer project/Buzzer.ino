#define PIR_PIN 7
#define BUZZER_PIN 8

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(PIR_PIN);

  if (sensorValue == HIGH) {
    digitalWrite(BUZZER_PIN, HIGH);
    Serial.println("Motion Detected!");
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(500);
}