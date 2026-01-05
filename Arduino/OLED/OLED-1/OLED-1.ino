#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define BUTTON_PIN 2

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

bool buttonPressed = false;  

void setup() 
{
  pinMode(BUTTON_PIN, INPUT_PULLUP); 
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
}

void loop() 
{
  
  if (digitalRead(BUTTON_PIN) == LOW && buttonPressed == false) 
  {
    buttonPressed = true;  
    
    
    for (int i = 10; i >= 0; i--) 
    {
      display.clearDisplay();
      display.setTextSize(5);
      display.setCursor(50, 16);  
      display.print(i);
      display.setTextSize(1);
      display.setCursor(0, 0);
      display.print("Downcount to 2026");
      display.display();
      delay(1000);
    }

    
    display.clearDisplay();
    display.setTextSize(3);
    display.setCursor(0, 20);  
    display.println("BOOM!!!");
    display.setTextSize(2);
    display.setCursor(0,0);
    display.print("!*!*!*!*!*");
    display.display();
    delay(2000);

    
    display.clearDisplay();
    display.setTextSize(2);
    display.setCursor(0, 0);  
    display.println("Cheers to");
    display.setTextSize(3);
    display.setCursor(20, 25);
    display.println("*2026*");
    display.display();
    delay(3000);
  }

  
  if (digitalRead(BUTTON_PIN) == HIGH) 
  {
    buttonPressed = false;
  }
}