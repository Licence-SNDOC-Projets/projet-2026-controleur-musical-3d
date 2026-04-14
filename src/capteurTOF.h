#ifndef CAPTEURTOF_H
#define CAPTEURTOF_H

#include <string>

#define BROCHECAPTEURTOF1 8
#define BROCHEXSHUT1 5
#define NOMBREDECAPTEUR 4

void initialiserCapteurTOF();
void initiliserLiasonI2C();
void initialiserBrocheSCHUT();
void initialiserAdresseCapteur(int brocheXSHUT);
std::string traductionMessageCapteur(int infoCapteur);

#endif