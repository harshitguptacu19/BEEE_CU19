void setup()
{
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  if(digitalRead(6)==HIGH)
  {
    digitalWrite(10, HIGH);
    delay(100); 
    digitalWrite(10, LOW);
  delay(100);
  }
}
