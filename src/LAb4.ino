SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
bool value;
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D6, OUTPUT);
  pinMode(D7, INPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  value = digitalRead(D7);
  if(value){
    digitalWrite(D6, HIGH);
  } 
  else {
    digitalWrite(D6, LOW);
  }
}