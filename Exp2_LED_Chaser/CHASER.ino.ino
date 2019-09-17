void setup() {
  void setup()
{ for(int i=13;i<=5;i--)
  pinMode(i,OUTPUT);
}

void loop()
{
 for(int j=13;j<=5;j--)
 {
   digitalWrite(j,HIGH);
   delay(100);
   digitalWrite(j,LOW);
   delay(100);
 }
}
  
