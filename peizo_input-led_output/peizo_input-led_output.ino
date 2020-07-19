
const int knockSensor = A0; // the piezo is connected to analog pin 0
int led = 7;


// these variables will change:
int sensorReading ;      // variable to store the value read from the sensor pin

void setup() {
  pinMode  (led , OUTPUT);
  Serial.begin(9600);       // use the serial port
}

void loop() {
  
  sensorReading = analogRead(knockSensor);
  Serial.println(sensorReading);
  if (sensorReading >= 2)
    { digitalWrite (led, HIGH );
    delay (2000);
    digitalWrite (led, LOW);}
  

delay(10);  // delay to avoid overloading the serial port buffer
}
