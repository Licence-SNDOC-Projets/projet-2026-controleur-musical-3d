#include "capteurTOF.h"
#include <Arduino.h>
#include <Wire.h>
#include <VL53L1X.h>

VL53L1X sensor1;

void initialiserCapteurTOF()
{
    pinMode(BROCHECAPTEURTOF1,INPUT);
    pinMode(BROCHEXSHUT1,OUTPUT);
}
void initiliserLiasonI2C()
{
    Wire.begin(8,9);
}
void initialiserBrocheXSHUT()
{
    digitalWrite(BROCHEXSHUT1,LOW);
    delay(10);
}
void initialiserAdresseCapteur(int brocheXSHUT)
{
    digitalWrite(brocheXSHUT,HIGH);
    delay(10);
    sensor1.setTimeout(500);
  if (!sensor1.init()) {
    Serial.println("Erreur capteur 1");
    while (1);
  }
  sensor1.setAddress(0x30);
  sensor1.startContinuous(50);
}
int infoCapteur()
{
  return sensor1.read();
}
String traductionMessageCapteur(int ifoCapteur)
{
  Serial.println(ifoCapteur);

}