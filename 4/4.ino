#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int contador = 0;  

void setup() 
{
  lcd.init();
  lcd.backlight();
  pinMode(2,INPUT);
}

void loop() 
{
  if(digitalRead(2)==HIGH)
  {
    contador = contador + 1;
  }
  lcd.setCursor(0,0);
  lcd.print("Botellas "+ String(contador));
  delay(500);
}