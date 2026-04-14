#ifndef CAPTEURTOF_H
#define CAPTEURTOF_H

#include <string>

#define BROCHECAPTEURTOF 8

void initialiserCapteurTOF();
void initiliserLiasonI2C();
std::string traductionMessageCapteur(int infoCapteur);

#endif