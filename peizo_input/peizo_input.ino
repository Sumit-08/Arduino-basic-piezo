
const int knockSensor = A0; // the piezo is connected to analog pin 0



// these variables will change:
int sensorReading = 0;      // variable to store the value read from the sensor pin

void setup() {
  Serial.begin(9600);       // use the serial port
}

void loop() {
  
  sensorReading = analogRead(knockSensor);
  Serial.println(sensorReading);
 
  delay(10);  // delay to avoid overloading the serial port buffer
}
