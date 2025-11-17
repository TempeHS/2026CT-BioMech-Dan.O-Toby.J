#include <Ultrasonic.h>

Ultrasonic myUltraSonicSensor(5);

bool Incline = false

void Ultrasonicsetup() {
  Serial.begin(9600);
}


void UltrasonicFunction() {
  unsigned long RangeInCentimeters;
  RangeInCentimeters = myUltraSonicSensor.MeasureInInches();
  Serial.print(RangeInCentimeters);
  Serial.println(" cm away from the whip");
  delay(100);
  
  if RangeInCentimeter > 20;
  myUltraSonicSensor = Incline;
}
