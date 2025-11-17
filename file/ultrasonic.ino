#include <Ultrasonic.h>

Ultrasonic myUltraSonicSensor(5);

void Ultrasonicsetup() {
  Serial.begin(9600);
}


void UltrasonicFunction() {
  unsigned long RangeInCentimeters;
  RangeInCentimeters = myUltraSonicSensor.MeasureInCm();
  Serial.print(RangeInCentimeters);
  Serial.println(" cm");
  delay(250);

}