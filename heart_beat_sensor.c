/*
    Project name : ESP8266 Heartbeat module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-heartbeat-module
*/

const int heartSensorPin = A0; // Analog pin connected to the heart rate sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the value from the heart rate sensor
  int sensorValue = analogRead(heartSensorPin);
  
  // Print the sensor value to the Serial Monitor
  Serial.print("Heart Rate Sensor Value: ");
  Serial.println(sensorValue);
  
  delay(1000); // Add a small delay before the next reading
}
