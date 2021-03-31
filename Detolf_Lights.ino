#include <FastLED.h>
#define LED_PIN    6
#define NUM_LEDS  50

CRGB led[NUM_LEDS];

void setup() 
{
  FastLED.addLeds<WS2812, LED_PIN, GRB>(led,NUM_LEDS);
}

void loop() 
{
  for(int i=0;i<=50; i++)
  {
    led[i] = CRGB(100,120,225);
    FastLED.show();
    delay(40); 
  }
  
  delay(1000);
  
  for(int i=50;i>=0; i--)
  {
    led[i] = CRGB(255,0,0);
    FastLED.show();
    delay(40); 
  }
}
