#include <Ultrasonic.h>

Ultrasonic myUltraSonicSensor(5);

bool Incline = false;

unsigned long previousMillis2 = 0;

void UltrasonicSetup() {
  Serial.begin(9600);
}

void UltrasonicFunction() {
  unsigned long RangeInCentimeters;
  RangeInCentimeters = myUltraSonicSensor.MeasureInCentimeters();
  Serial.print(RangeInCentimeters);
  Serial.println(" cm away from the whip");
  delay(100);z
  
  
  int distance1 = myUltraSonicSensor.MeasureInCentimeters();
  delay(500);

   int distance2 = myUltraSonicSensor.MeasureInCentimeters();
  delay(500); 
}
