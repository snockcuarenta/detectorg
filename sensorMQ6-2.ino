int sensorValue;
int GasSensorPin = 0;   //Gas Sensor Connection
void setup()
{
 pinMode(13, OUTPUT);
 pinMode(11, OUTPUT);
 Serial.begin(9600);      // sets the serial port to 9600
}
void loop()
{
 sensorValue = analogRead(GasSensorPin);       // read analog input pin 0
 Serial.println(sensorValue, DEC);  // prints the value read
 if(analogRead(sensorValue)>400){
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  }
  else{
    digitalWrite(13, LOW);
    digitalWrite(11, HIGH);
    }
 delay(100);                        // wait 100ms for next reading
 
}
