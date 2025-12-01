#include <Ultrasonic.h>

Ultrasonic myUltraSonicSensor(5);

bool Incline = false;

unsigned long previousMillis2 = 0;


void UltrasonicFunction() {
  unsigned long RangeInCentimeters;
  RangeInCentimeters = myUltraSonicSensor.MeasureInCentimeters();
  Serial.print(RangeInCentimeters);
  Serial.println(" cm away from the whip");
  delay(100);


  int distance1 = myUltraSonicSensor.MeasureInCentimeters();
  delay(500);
  Serial.print(distance1);

  int distance2 = myUltraSonicSensor.MeasureInCentimeters();
  delay(500);
  Serial.print(distance2);

  if (distance2 - distance1 > 20) {
  Incline = true;
  }
}
