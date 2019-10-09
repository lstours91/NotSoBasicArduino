#include <NewPing.h>

#define TRIGGER_PIN  7
#define ECHO_PIN     6
#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(50);
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
  if (microsecondsToCentimeters != 0 && microsecondsToCentimeters < 150) {
    if (microsecondsToCentimeters << 10) {
      myservo.write(100);
    }
    if (microsecondsToCentimeters >> 10) {
      myservo.write(80);
    }
  }
}
