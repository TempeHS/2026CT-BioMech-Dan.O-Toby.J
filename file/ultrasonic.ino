#include <Ultrasonic.h>

Ultrasonic myUltraSonicSensor(5);

bool Incline = false;

unsigned long previousMillis2 = 0;


void UltrasonicFunction() {
  unsigned long currentMillis = millis();  // Get current time
  unsigned long RangeInCentimeters;
  const long interval = 500;
  RangeInCentimeters = myUltraSonicSensor.MeasureInCentimeters();

  int distance1 = myUltraSonicSensor.MeasureInCentimeters();
  delay(500);
  Serial.println("First measurement:");
  Serial.println(distance1);



  if (currentMillis - previousMillis2 >= interval) {
    previousMillis2 = currentMillis;

    int distance2 = myUltraSonicSensor.MeasureInCentimeters();
    delay(500);
    Serial.println("Second measurement:");
    Serial.println(distance2);

    int distance = distance2 - distance1;

    if (distance2 - distance1 > 20) {
      Incline = true;
    }

    Serial.println("Difference:");
    Serial.println(distance);
  }
}
