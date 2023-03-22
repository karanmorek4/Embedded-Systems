#include <LiquidCrystal.h>
void fun_delay(int x);

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

long int tme = 0;
int motorPin = 3;
int buttonPin = 4;
int reset = 0;


void setup() 
{

  lcd.begin(16, 2);
  pinMode(motorPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(reset, INPUT);

}

void loop()
{

  if (digitalRead(reset) == HIGH)
  {
    lcd.clear();
    tme = 0;
    digitalWrite(motorPin, LOW);
  }

  lcd.setCursor(0, 1);
  lcd.print("Count: ");
  lcd.print(tme);
  tme += 1;

  if (digitalRead(buttonPin) == HIGH)
  {
    digitalWrite(motorPin, HIGH);
    fun_delay(10);
  }

  digitalWrite(motorPin, LOW);
  delay(1000);
}

void fun_delay(int x)
{
  while (x--)
  {
    lcd.setCursor(0, 0);
    lcd.print("Motor : ON");

    lcd.setCursor(0, 1);
    lcd.print("Count: ");
    lcd.print(tme);
    tme += 1;
    delay(1000);
    lcd.setCursor (0, 0);
    for (int i = 0; i < 16; ++i)
    {
      lcd.write(' ');
    }
  }
  return ;
}
