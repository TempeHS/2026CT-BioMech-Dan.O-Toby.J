#include <Ultrasonic.h>

Ultrasonic myUltraSonicSensor(5);
void setup()
{
  Serial.begin(9600);
}


void loop()
{
  unsigned long RangeInCentimeters;
  RangeInCentimeters = myUltraSonicSensor.distanceRead();
  Serial.print(RangeInCentimeters);
  Serial.println(" cm");
  delay(250);

  
}