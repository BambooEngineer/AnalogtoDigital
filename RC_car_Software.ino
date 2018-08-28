int sensorPin = A0;    // selects input pin for Potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declares the ledPin as an OUTPUT:
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // reads the value from the sensor:
  sensorValue = analogRead(sensorPin); 
  if(sensorValue < 500)
    digitalWrite(8, HIGH); // Turn on Left Turn
    digitalWrite(2,LOW); // Turn off Right Turn
  if(sensorValue > 500)
    digitalWrite(2,HIGH); // Turn on Right Turn
    digitalWrite(8,LOW);  // Turn off Left Turn
}
