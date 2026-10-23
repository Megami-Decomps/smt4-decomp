#include "common.h"

extern "C" {

void infoWinExpandAndSetText(void);
void infoWinShowDefault(void);
int infoWinSetTimer(int arg);

int FUN_002c2d44(void)
{
    infoWinExpandAndSetText();
    infoWinShowDefault();
    return infoWinSetTimer(-1);
}

} /* extern "C" */
