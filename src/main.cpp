
#include<Arduino.h>
#include "capteurTOF.h"
#include <String.h>
void setup()
{
     Serial.begin(115200);
     Serial.println("test setup");
     initiliserLiasonI2C();
    initialiserCapteurTOF();
    initialiserBrocheXSHUT();
    initialiserAdresseCapteur(BROCHEXSHUT1);
    
   pinMode(21,OUTPUT);
}
void loop()
{
    digitalWrite(21,HIGH);
    
    int dataCapteur=infoCapteur();
    String son=traductionMessageCapteur(dataCapteur);
    Serial.println(son);
    delay(100);
}
     

     /*
   #include <Adafruit_NeoPixel.h>

#define PIN 21        // GPIO utilisé
#define NUMPIXELS 1  // nombre de LED

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
     Serial.begin(115200);
  pixels.begin();
  pixels.clear();
  pixels.show();
}

void loop() {
     Serial.println("test loop");
  // Rouge
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  pixels.show();
  delay(1000);

  // Vert
  pixels.setPixelColor(0, pixels.Color(0, 255, 0));
  pixels.show();
  delay(1000);

  // Bleu
  pixels.setPixelColor(0, pixels.Color(0, 0, 255));
  pixels.show();
  delay(1000);

  // Éteint
  pixels.clear();
  pixels.show();
  delay(1000);
}*/