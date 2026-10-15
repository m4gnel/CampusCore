#define t 9
#define e 10
#define in1 6
#define in2 7
#define E 5

void setup()
{
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  pinMode(E,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  Serial.begin(9600);
  
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
}

void loop()
{
  digitalWrite(t,LOW);
  delayMicroseconds(2);
  
  digitalWrite(t,HIGH);
  delayMicroseconds(10);
  
  digitalWrite(t,LOW);
  
  long d = pulseIn(e,HIGH)*0.034/2;
  
  Serial.println("Distance : ");
  Serial.println(d);
  
  if(d < 10)
  {
    analogWrite(E,50);
  }
  else
  {
    analogWrite(E,250);
  }
  
  if(Serial.available())
  { 
   String s = Serial.readString();
   Serial.println(s);
   s.trim();
   String r = "";
  
   for(int i = s.length()-1;i>=0;i--)
   {
     r = r+s[i];
   }
   Serial.println(r);
   if(r == s)
   {
     Serial.println("PALINDROME");
   }
   else
   {
     Serial.println("NOT PALINDROME");
   }
  }
}
  
