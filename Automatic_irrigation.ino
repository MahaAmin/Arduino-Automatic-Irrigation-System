//int ledred = 12;
int ledyellow = 3;
int ledgreen = 4;
int ledblue = 5;
int ledwhite = 6;
int moistureSensor = 0;
int relaysolenoid = 7;
int relaymotor = 8;


void setup()
{
  Serial.begin(9600);
 // pinMode(ledred , OUTPUT);
  pinMode(ledyellow , OUTPUT);
  pinMode(ledgreen , OUTPUT);
  pinMode(ledblue , OUTPUT);
  pinMode(ledwhite , OUTPUT);
  pinMode(relaysolenoid , OUTPUT);
  pinMode(relaymotor , OUTPUT);
}


void loop()
{
  int SensorValue = analogRead(moistureSensor);
  Serial.println(SensorValue);

  if(SensorValue >= 350)
  {
   // digitalWrite(ledred, HIGH);
    digitalWrite(ledyellow, HIGH);
    digitalWrite(ledgreen, HIGH);
    digitalWrite(ledblue, HIGH);
   digitalWrite(ledwhite, LOW);
    digitalWrite(relaymotor, HIGH);
    digitalWrite(relaysolenoid, HIGH);
    delay(2000);
  }

  else if(SensorValue < 350)
  {
   // digitalWrite(ledred, LOW);
    digitalWrite(ledyellow, LOW);
    digitalWrite(ledgreen, LOW);
    digitalWrite(ledblue, HIGH);
    digitalWrite(ledwhite, HIGH);
    digitalWrite(relaymotor, LOW);
    digitalWrite(relaysolenoid, LOW);
  }
}










