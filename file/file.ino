void setup() {
  lightbarSetup();
  motionsensorSetup();
  Ultrasonicsetup();
}

void loop(){
  lightbarFunction();
  motionsensorFunction();
  UltrasonicFunction();
}