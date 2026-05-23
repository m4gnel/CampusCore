#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPin[ROWS] = {2,3,4,5};
byte colPin[COLS] = {6,7,8,9};

Keypad keypad = Keypad(makeKeymap(keys),rowPin,colPin,ROWS,COLS);

String pass = "1234";
String input = "";

void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  char key = keypad.getKey();
  
  if(key)
  {
    input = input + key;
	Serial.println(input);
    
    if(input.length() == 4)
    {
      if(input == pass)
      {
        Serial.println("ACCESS GRANTED");
        digitalWrite(13,HIGH);
      }
      else
      {
        Serial.println("ACCESS DENIED");
        digitalWrite(13,LOW);
      }
      input = "";
    }
  }
}
