#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define P1 4
#define P2 5
#define LED 6
LiquidCrystal_I2C lcd (0x3F, 16, 2);
int porcentaje, brillo;

void setup() {
 pinMode (P1, INPUT_PULLUP);
 pinMode (P2, INPUT_PULLUP);
 pinMode (LED, OUTPUT);
 lcd.init();
 lcd.backlight();
 lcd.blink();
 lcd.home();
 lcd.print ("OFF");
 lcd.setCursor (6, 0);
 lcd.print ("20%");
 lcd.setCursor (12, 0);
 lcd.print ("40%");
 lcd.setCursor (0, 1);
 lcd.print ("60%");
 lcd.setCursor (6, 1);
 lcd.print ("80%");
 lcd.setCursor (12, 1);
 lcd.print ("MAX");
 lcd.setCursor (3, 0); 
}

void loop() {
 brillo = map (porcentaje, 0, 100, 0, 255);

 if (porcentaje==0 && digitalRead(P1)==LOW) { 
  lcd.setCursor (9, 0);
  porcentaje = 20;
  delay(250);
 }

 if (porcentaje==20 && digitalRead(P1)==LOW){
  lcd.setCursor (15, 0);
  porcentaje = 40;
  delay(250);
 }
 if (porcentaje==40 && digitalRead(P1)==LOW){
  lcd.setCursor (3, 1);
  porcentaje = 60;
  delay(250);
 }
 if (porcentaje==60 && digitalRead(P1)==LOW){
  lcd.setCursor (9, 1);
  porcentaje = 80;
  delay(250);
 }
 if (porcentaje==80 && digitalRead(P1)==LOW){
  lcd.setCursor (15, 1);
  porcentaje = 100;
  delay(250);
 }
 if (porcentaje==100 && digitalRead(P1)==LOW){
  lcd.setCursor (3, 0);
  porcentaje = 0;
  delay(250);
 }

 if (digitalRead(P2)==LOW){
  analogWrite (LED, brillo);
  delay(250);
 }

}
