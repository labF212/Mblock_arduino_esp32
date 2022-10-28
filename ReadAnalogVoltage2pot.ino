

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A1);
  int sensorValue1 = analogRead(A5);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  float voltage1 = sensorValue1 * (5.0 / 1023.0);
  // print out the value you read:
  Serial.print("voltage (A1): ");
  Serial.println(voltage);
  Serial.print("voltage (A5): ");
  Serial.println(voltage1);
  delay(500);
}
