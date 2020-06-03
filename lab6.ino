#include <Keypad.h>

#define pin 8
#define eight 0.5
#define sixteenth 0.25
#define Do2 294
#define Re2 330
#define Mi2 370
#define Fa2 392
#define So2 440
#define La2 494
#define Si2 554

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {{'F','E','D','C'},{'B','3','6','9'},{'A','2','5','8'},{'0','1','4','7'}};

byte colPins[COLS] = {17,16,15,14};
byte rowPins[ROWS] = {13,12,11,10};
Keypad keypad = Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);

void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);
  Serial.begin(9600);
}
void ttone(int a,int b,int c)
{
  tone(a,b,c);
  delay(c);
  noTone(a);
}

void loop() {
  // put your main code here, to run repeatedly:
    char key = keypad.getKey();
    if(key!=NO_KEY)
    {
      if(key == '1')
          ttone(pin,Do2,300);
      else if(key == '2')
          ttone(pin,Re2,300);
      else if(key == '3')
          ttone(pin,Mi2,300);
      else if(key == '4')
          ttone(pin,Fa2,300);
      else if(key == '5')
          ttone(pin,So2,300);
      else if(key == '6')
          ttone(pin,La2,300);
      else if(key == '7')
          ttone(pin,Si2,300);
      else if(key == '8')
          ttone(pin,Do2*2,300);
    }
}
