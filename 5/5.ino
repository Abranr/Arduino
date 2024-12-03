#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int contador = 0;

void setup() 
{
  lcd.init();
  lcd.backlight();
  pinMode(2, INPUT);  // Switch para incrementar
  pinMode(3, INPUT);  // Switch para decrementar
  pinMode(4, INPUT);  // Switch para limpiar
  }

void loop() 
{
  if (digitalRead(2) == HIGH) 
  {
    contador = contador + 1;
    lcd.setCursor(0, 0);
    lcd.print("Botellas: " + String(contador) + " ");
    delay(300);  
  }
  if (digitalRead(3) == HIGH) 
  {
    contador = contador - 1 ;
    lcd.setCursor(0, 0);
    lcd.print("Botellas: " + String(contador) + " ");
    delay(300);  
  }

  if (digitalRead(4) == HIGH) 
  {
    contador = 0;
    lcd.setCursor(0, 0);
    lcd.print("Botellas: 0        ");  
    delay(300);  
  }
}