
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPLfR-koN_o"
#define BLYNK_DEVICE_NAME "Home Automation"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"
//#define BLYNK_PRINT Serial
#define USE_NODE_MCU_BOARD

#include "BlynkEdgent.h"

BLYNK_WRITE(V0)
{
  int s0 = param.asInt(); // parameter as int 
  if(s0 == HIGH)
  {    
    digitalWrite(D2,HIGH);
    Serial.println('\r');
    Serial.println(10);
    Serial.println('|');
    Serial.println(10);
    Serial.println('\n');
    delay(10);
    }  
    if(s0 == LOW)
  {
    digitalWrite(D2,LOW);
    Serial.println('\r');
    Serial.println(50);
    Serial.println('|');
    Serial.println(50);
    Serial.println('\n');
    delay(10);
    }  
}
BLYNK_WRITE(V1)
{
  int s1 = param.asInt(); // parameter as int 
  if(s1 == HIGH)
  {    
    digitalWrite(D5,HIGH);
    Serial.println('\r');
    Serial.println(20);
    Serial.println('|');
    Serial.println(20);
    Serial.println('\n');
    delay(10);
    }  
    if(s1 == LOW)
  {
    digitalWrite(D5,LOW);
    Serial.println('\r');
    Serial.println(60);
    Serial.println('|');
    Serial.println(60);
    Serial.println('\n');
    delay(10);
    }  
}
BLYNK_WRITE(V2)
{
  int s2 = param.asInt(); // parameter as int 
  if(s2 == HIGH)
  {    
    digitalWrite(D6,HIGH);
    Serial.println('\r');
    Serial.println(30);
    Serial.println('|');
    Serial.println(30);
    Serial.println('\n');
    delay(10);
    }  
    if(s2 == LOW)
  {
    digitalWrite(D6,LOW);
    Serial.println('\r');
    Serial.println(70);
    Serial.println('|');
    Serial.println(70);
    Serial.println('\n');
    delay(10);
    }  
}
BLYNK_WRITE(V3)
{
  int s3 = param.asInt(); // parameter as int 
  if(s3 == HIGH)
  {    
    digitalWrite(D7,HIGH);
    Serial.println('\r');
    Serial.println(40);
    Serial.println('|');
    Serial.println(40);
    Serial.println('\n');
    delay(10);
    }  
    if(s3 == LOW)
  {
    digitalWrite(D7,LOW);
    Serial.println('\r');
    Serial.println(80);
    Serial.println('|');
    Serial.println(80);
    Serial.println('\n');
    delay(10);
    }  
}
void setup()
{
  Serial.begin(9600);
//  mySerial.begin(9600);
  pinMode(D2,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
  pinMode(D7,OUTPUT);
  digitalWrite(D2,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
    BlynkEdgent.begin();
}

void loop() {

    BlynkEdgent.run();
//    sensor();
}
