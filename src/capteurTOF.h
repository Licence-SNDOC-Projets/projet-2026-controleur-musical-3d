#ifndef CAPTEURTOF_H
#define CAPTEURTOF_H

#include <Arduino.h>
#include <String.h>

#define BROCHECAPTEURTOF1 10
#define BROCHEXSHUT1 5
#define NOMBREDECAPTEUR 4

void initialiserCapteurTOF();
void initiliserLiasonI2C();
void initialiserBrocheXSHUT();
void initialiserAdresseCapteur(int brocheXSHUT);
int infoCapteur();
String traductionMessageCapteur(int infoCapteur);

#endif