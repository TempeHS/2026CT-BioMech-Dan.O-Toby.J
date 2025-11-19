#include <Grove_LED_Bar.h>
Grove_LED_Bar bar(9,8, 0);

void setup() {
  bar.begin();
  Serial.begin(9600);
}

void loop(){
  UltrasonicFunction();
  lightbarIncline();
}