void setup()
{
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12,OUTPUT);
}

void loop()
{
  int dis;
  long t;
  
    digitalWrite(11,LOW);
   delayMicroseconds(2);
   digitalWrite(11,HIGH);
   delayMicroseconds(10);
   digitalWrite(11,LOW);
  
   t=pulseIn(10, HIGH);
     dis=0.017*t;
  
     if(dis>20)
    {
       
     for(int i=0;i<=255;i+10)
      {
        analogWrite(3,i);
        delay(50);
      }
      for(int i=255;i>=0;i-10)
      {
        analogWrite(3,i);
        delay(50);
      }
    }
    else
      analogWrite(3,0);
   }
