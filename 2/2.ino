#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Configuración de la pantalla LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Configuración de LEDs c
  pinMode(13, OUTPUT); // LED 1 (Rojo)
  pinMode(12, OUTPUT); // LED 2 (Amarillo)
  pinMode(11, OUTPUT); // LED 3 (Verde)
  
  // Configuración de switches
  pinMode(2, INPUT); // Switch 1
  pinMode(3, INPUT); // Switch 2
  
  // Inicializar la pantalla LCD
  lcd.init();
  lcd.backlight();
}

void loop() {
  if (digitalRead(2) == HIGH) { // Si se presiona el Switch 1
    // Mostrar mensaje en LCD
    lcd.setCursor(10, 0);
    lcd.print("Feliz Navidad");
    lcd.setCursor(0, 1);
    lcd.print("2024");
    lcd.clear();
    
     digitalWrite(13,HIGH);  //encender led
     delay(1000);
     digitalWrite(13,LOW);  //apagar led
     delay(1000);
     digitalWrite(12,HIGH);  //encender led
     delay(1000);
     digitalWrite(12,LOW);  //apagar led
     delay(1000);
     digitalWrite(11,HIGH);  //encender led
     delay(1000);
     digitalWrite(11,LOW);  //apagar led
     delay(1000);
  } 
   else
   (digitalRead(3) == HIGH);
   { // Si se presiona el Switch 2
    // Mostrar mensaje en LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Holaa");
    lcd.setCursor(0, 1);
    lcd.print("Marcelino");
    
    // Juego de luces 2: Alternar LEDs
    digitalWrite(13, HIGH);
    delay(900);
    digitalWrite(13, LOW);
    delay(900);

    digitalWrite(13, HIGH);
    delay(1100);
    digitalWrite(13, LOW);
    delay(1100);

    digitalWrite(12, HIGH);
    delay(2000);
    digitalWrite(12, LOW);
    delay(100);

    digitalWrite(11, HIGH);
    delay(4000);
    digitalWrite(11, LOW);
    delay(100);

    lcd.clear();
  }
}

