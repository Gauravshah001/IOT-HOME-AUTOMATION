#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
#include <SoftwareSerial.h>
const byte rxPin = 6;
const byte txPin = 7;
SoftwareSerial mySerial (rxPin, txPin);
void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  lcd.begin(20,4);
  lcd.setCursor(4,1);
  lcd.print("Welcome To ");
  lcd.setCursor(4,2);
  lcd.print("Home Automation");
  delay(9000);
  lcd.clear();
  lcd.print("Bulb 1");
  lcd.setCursor(0,0);
  lcd.print("Bulb 2");
  lcd.setCursor(0,0);
  lcd.print("Bulb 3");
  lcd.setCursor(0,0);
  lcd.print("Bulb 4");
  lcd.setCursor(0,0);
  lcd.print("OFF");
  lcd.setCursor(0,0);
  lcd.print("OFF");
  lcd.setCursor(0,0);
  lcd.print("OFF");
  lcd.setCursor(0,0);
  lcd.print("OFF");
  
}

void loop()
{
  if (mySerial.available()<1)  return;
  char R=mySerial.read();
  if (R!='\r')                 return;
  int bulb=mySerial.parseInt();
  lcd.setCursor(0,0);
  lcd.print("Bulb 1");
  lcd.setCursor(0,1);
  lcd.print("Bulb 2");
  lcd.setCursor(0,2);
  lcd.print("Bulb 3");
  lcd.setCursor(0,3);
  lcd.print("Bulb 4");
  
  if (bulb==10)
  {
    
    lcd.setCursor(14,0);
    lcd.print("ON ");
    Serial.println(bulb); 
    }
    else if (bulb==50)
    {
    lcd.setCursor(14,0);
    lcd.print("OFF");
    Serial.println(bulb); 
    }
  if (bulb==20)
  {
    lcd.setCursor(14,1);
    lcd.print("ON ");
    Serial.println(bulb); 
    }
    else if (bulb==60)
    {
   
    lcd.setCursor(14,1);
    lcd.print("OFF");
    Serial.println(bulb); 
    }
    if (bulb ==30)
  {
  
    lcd.setCursor(14,2);
    lcd.print("ON ");
    Serial.println(bulb); 
    }
    else if (bulb==70)
    {
  
    lcd.setCursor(14,2);
    lcd.print("OFF");
    Serial.println(bulb); 
    }
    if (bulb == 40)
  {
    
    lcd.setCursor(14,3);
    lcd.print("ON ");
    Serial.println(bulb); 
    }
    else if (bulb==80)
    {
   
    lcd.setCursor(14,3);
    lcd.print("OFF");
    Serial.println(bulb); 
    }
  
 }
