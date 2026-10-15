#include <Servo.h>

Servo myservo;
int num;

void setup()
{
  Serial.begin(9600);
  myservo.attach(9);
}

void loop()
{
  if(Serial.available() > 0)
  {
    num = Serial.parseInt();
      
    if(num<40)
    {
      myservo.write(90);
      Serial.println("Servo Moved To 90 Degree");
    }
    else
    {
      myservo.write(180);
      Serial.println("Servo Moved TO 180 Degree");
    }
  }
}
  
