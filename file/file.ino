void setup() {
  lightbar_setup();
  motion_sensor_setup();
  ultrasonic_setup();
}

void loop() {
  lightbar();
  motion_sensor();
  ultrasonic();
  delay(100);
}