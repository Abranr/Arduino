#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  

void setup() {
   lcd.init();
   lcd.backlight();
   pinMode(2,INPUT);
   pinMode(3,INPUT);
   pinMode(11,OUTPUT);
   pinMode(12,OUTPUT);
   pinMode(13,OUTPUT);
}

void loop() 
{
  if(digitalRead(2)==HIGH)
  {
    lcd.setCursor(1,0);
    lcd.print("Feliz Navidad");
    lcd.setCursor(2,1);
    lcd.print("2024");
    digitalWrite(11,HIGH);
    delay(300);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delay(300);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(300);
    digitalWrite(13,LOW);
    delay(300);
    lcd.clear();
  }
  else
  {
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("PRESIONE TECLA");
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(300);
  }

  if(digitalRead(3)==HIGH)
  {
    lcd.setCursor(1,0);
    lcd.print("Prospero año");
    lcd.setCursor(2,1);
    lcd.print("Nuevo");
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(300);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(300);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(300);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(300);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    delay(300);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(300);
  }
  else
  {
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("PRESIONE TECLA");
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(300);
  }
}