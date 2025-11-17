Installed Grove ultrasonic sensor ranger 1.0.1, installed Grove LED bar 1.0.0
defined the Ultrasonic sensor as Ultrasonic. 
,,,
#include <Ultrasonic.h>

Ultrasonic myUltraSonicSensor(5);

void Ultrasonicsetup() {
  Serial.begin(9600);
}
,,,
 This code defines the Ultra sonic sensor and set the baud rate to 9600 so that the sensor can be read.

Our goal is to have the ultra sonic sensor read the distrance from the ground then sending that distance to the light sensor 

This is the code the measures the distance from the Ultrasonic sensor 
,,,
void UltrasonicFunction() {
  unsigned long RangeInCentimeters;
  RangeInCentimeters = myUltraSonicSensor.MeasureInInches();
  Serial.print(RangeInCentimeters);
  Serial.println(" cm away from the whip");
  delay(100);

}
,,,

This code provides the function of the distance part of the lieght bar sensding the distance for the lightbar to react to
 