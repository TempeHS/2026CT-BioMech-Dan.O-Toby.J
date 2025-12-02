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
This code has been changed with the ultrasonic setup having added 2 delays with one that forced a stop on the code and one that allows a break for the distance distance calculation 
,,,

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
,,,

This code block works with the light bar and when the ultrasonic sensor measures a distance bigger than 20.
it causes a interger called incline to equal true, this then goes to the light bar and activates the function.
The code does not dynamicaly measure the distance that then casues the light bar to change levels 
this is not what happends and to do this we will need to increase development.  

 We have learnt that the Serial begin needs to be moved to file.ino with this file just calling the light bar and ultrasonic functions 
 This code measures the distance then prints it then after a delay is comparing the differnce with the pervoiuse distance to read
 then prints it as a measurement 

The Serial moniter display:  
    "First measurement"
      25
      "Second measuremet"
      25
      Differnce:
      0


We have the basic strucutre and can now work on dynamiclay moving the light bar caused by the ultrasonic sensor
