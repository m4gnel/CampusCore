#define g 5
#define m 6
#define r 7
#define t 2

void setup()
{
  pinMode(g,OUTPUT);
  pinMode(r,OUTPUT);
  pinMode(t,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  int s = digitalRead(t);
  
  if(s == HIGH)
  {
    digitalWrite(g,HIGH);
    digitalWrite(r,LOW);
    delay(3000);
    digitalWrite(g,LOW);
    digitalWrite(m,HIGH);
  }
  else
  {
    digitalWrite(g,LOW);
    digitalWrite(r,HIGH);
    delay(3000);
    digitalWrite(r,LOW);
    digitalWrite(m,LOW);
  }
}
  
