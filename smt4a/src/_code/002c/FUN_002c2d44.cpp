#include "font/InfoWinTextApi.h"
#include "common.h"

extern "C" {

void infoWinShowDefault(void);
int infoWinSetTimer(int arg);

int FUN_002c2d44(const char *text)
{
    infoWinExpandAndSetText(text);
    infoWinShowDefault();
    return infoWinSetTimer(-1);
}

} /* extern "C" */
