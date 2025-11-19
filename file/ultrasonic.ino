#include <Ultrasonic.h>

Ultrasonic myUltraSonicSensor(5);

bool Incline = false


void UltrasonicFunction() {
  unsigned long RangeInCentimeters;
  RangeInCentimeters = myUltraSonicSensor.MeasureInCentimeters();
  Serial.print(RangeInCentimeters);
  Serial.println(" cm away from the whip");
  delay(100);
  
  
  if (RangeInCentimeters > 20) {
    Incline = true;
  } else {
    Incline = false;
  }
}
