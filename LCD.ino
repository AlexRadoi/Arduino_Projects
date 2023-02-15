#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h> 
#define ONE_WIRE_BUS 9 
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); 
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
void setup() { 
 lcd.begin(16,2); 
 byte heart[8] = 

              {

                0b00000,

                0b01010,

                0b11111,

                0b11111,

                0b11111,

                0b01110,

                0b00100,

                0b00000

              };
              lcd.createChar(1,heart);
              
               Serial.begin(9600);
               sensors.begin();
}
void loop() { 

/
   sensors.requestTemperatures(); 
  delay(25);
  Serial.println("Celsius temperature: ");
   Serial.println(sensors.getTempCByIndex(0));
   delay(1000);
 delay(500); 
 lcd.setCursor(2,1);
 
 
 lcd.print("Celsius  "); 
lcd.print (sensors.getTempCByIndex(0));
 delay(2000); 
 lcd.clear(); 
 lcd.noCursor(); 
 lcd.clear(); 
}
