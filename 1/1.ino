#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

//Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd(0x27,16,2);  //

void setup() {
  // Inicializar el LCD
  lcd.init();
  
  //Encender la luz de fondo.
  lcd.backlight();
  
 
}

void loop() {
  lcd.setCursor(3,0);
  lcd.print("Hola Mundo");
  lcd.setCursor(2,1);
  lcd.print("Arduino 2024");
  delay(4000);
  lcd.clear();

  lcd.setCursor(3,0);
  lcd.print("Intecap");
  lcd.setCursor(2,1);
  lcd.print("Electrónica");
  delay(3000);
  lcd.clear();

  lcd.setCursor(3,0);
  lcd.print("Pantallas");
  lcd.setCursor(2,1);
  lcd.print("LCD_ I2C ;)");
  delay(3000);
  lcd.clear();

}