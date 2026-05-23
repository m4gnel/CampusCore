#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);
String s,r;

void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
    s = Serial.readString();
    s.trim();
    Serial.println(s);
    r = "";
    for(int i = s.length()-1;i>=0;i--)
    {
      r = r + s[i];
    }
    
    lcd.clear();
      
    if(s == r)
    {
      lcd.print("PALINDROME");
    }
    else
    {
      lcd.print("NOT PALINDROME");
    }
    s = "";
  }
}
