int sensorPin=A0;
int buttonState = 0;
int sensorValue=0;
int count=0;
int lastState=0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(2);
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  if(buttonState==LOW)
  {
    lastState=1;
    count++;}  
  if(buttonState==HIGH)
  {  if(sensorValue>600&&count%2==0)
      {
    digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
         digitalWrite(10, HIGH);
         digitalWrite(9, HIGH);
         digitalWrite(8, HIGH);
         digitalWrite(7, HIGH);
        delay(500);
         digitalWrite(12,LOW);
        digitalWrite(11,LOW);
        digitalWrite(10,LOW);
        digitalWrite(9,LOW);
        digitalWrite(8,LOW);
        digitalWrite(7,LOW);
        delay(500);
      }
      else if(sensorValue>600&&count%2!=0)
  {
        digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
         digitalWrite(10, HIGH);
         digitalWrite(9, HIGH);
         digitalWrite(8, HIGH);
         digitalWrite(7, HIGH);
        delay(1000);
         digitalWrite(12,LOW);
        digitalWrite(11,LOW);
        digitalWrite(10,LOW);
        digitalWrite(9,LOW);
        digitalWrite(8,LOW);
        digitalWrite(7,LOW);
        delay(1000);
      }}delay(100);
}
