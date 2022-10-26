#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
DHT sensor(2,DHT11);
#define P1 3
#define P2 4
#define P3 5
LiquidCrystal_I2C lcd (0x3F, 16, 2);

int humedad, temperatura;
bool funciona1, funciona2, funciona3;

void setup() {
 pinMode (P1, INPUT_PULLUP);
 pinMode (P2, INPUT_PULLUP);
 pinMode (P3, INPUT_PULLUP);
 lcd.init();
 lcd.backlight();
 lcd.setCursor (0, 0);
 lcd.print ("P1->TEMP P2->HUM");
 lcd.setCursor (0, 1);
 lcd.print ("P3-> TEMP y HUM");
 sensor.begin();
}

void loop() {
 temperatura=sensor.readTemperature();
 humedad=sensor.readHumidity();
 
 if (digitalRead(P1)==LOW){
  funciona1=HIGH;
  funciona2=LOW;
  funciona3=LOW;
 }
 if (digitalRead(P2)==LOW){
  funciona2=HIGH;
  funciona1=LOW;
  funciona3=LOW;
  }
 if (digitalRead(P3)==LOW){
  funciona3=HIGH;
  funciona1=LOW;
  funciona2=LOW;
  }
  
 if (funciona1==HIGH){
    lcd.clear();
    lcd.setCursor (2, 0);
    lcd.print ("Temperatura:");
    lcd. setCursor (6, 1);
    lcd.print (temperatura);
    lcd.setCursor (10, 1);
    lcd.print ("C");
    delay(1000);
  }

  if (funciona2==HIGH){
    lcd.clear();
    lcd.setCursor (4, 0);
    lcd.print ("Humedad:");
    lcd. setCursor (6, 1);
    lcd.print (humedad);
    lcd.setCursor (10, 1);
    lcd.print ("%");
    delay(1000);
  }

  if (funciona3==HIGH){
    lcd.clear();
    lcd.setCursor (2, 0);
    lcd.print ("Temperatura:");
    lcd. setCursor (6, 1);
    lcd.print (temperatura);
    lcd.setCursor (10, 1);
    lcd.print ("C");
    delay(1000);
    lcd.clear();
    lcd.setCursor (4, 0);
    lcd.print ("Humedad:");
    lcd. setCursor (6, 1);
    lcd.print (humedad);
    lcd.setCursor (10, 1);
    lcd.print ("%");
    delay (1000);   
  } 
}

