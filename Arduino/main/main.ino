#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
int temp = 0;
int adc = 0;
int count1 = 0;
int count2 = 0;
void setup() {
  Serial.begin(9600);
   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000);
  display.clearDisplay();
  display.setTextSize(2);    
  display.setTextColor(WHITE);
}

void loop() {
  temp = analogReadTemp();
  adc = analogRead(A0);
  Serial.println(adc);
  if(adc>=700 && adc<900){
    count2=0;
    count1++;
    delay(40);
    if(count1>=15){
      display.setCursor(90, 30);
      display.setTextSize(3);
      display.clearDisplay();
      display.println(temp);
      display.setCursor(65, 10);
      display.setTextSize(2);
      display.println("Temp:");
      Serial.println("pierwszy dziala");
      display.setCursor(10, 10);
      display.setTextSize(6);
      display.println("1");
      display.display(); 
      }
    }
  if(adc>900){
    count1=0;
    count2++;
    delay(25);
    if(count2>=15){
      display.setCursor(90, 30);
      display.setTextSize(3);
      display.clearDisplay();
      display.println(temp);
      display.setCursor(65, 10);
      display.setTextSize(2);
      display.println("Temp:");
      Serial.println("drugi dziala");
      display.setCursor(10, 10);
      display.setTextSize(6);
      display.println("2");
      display.display(); 
      }
    }
  if(adc<690){
    count1 = 0;
    count2 = 0;
    display.setCursor(10, 25);
      display.setCursor(90, 30);
      display.setTextSize(3);
      display.clearDisplay();
      display.println(temp);
      display.setCursor(65, 10);
      display.setTextSize(2);
      display.println("Temp:");
      display.setCursor(10, 10);
      display.setTextSize(6);
      display.println("N");
      display.display(); 
      }
  
}
