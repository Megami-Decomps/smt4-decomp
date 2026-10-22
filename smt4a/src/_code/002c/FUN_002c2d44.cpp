#include "common.h"

extern "C" {

void FUN_002392b8(void);
void infoWinShowDefault(void);
int infoWinSetTimer(int arg);

int FUN_002c2d44(void)
{
    FUN_002392b8();
    infoWinShowDefault();
    return infoWinSetTimer(-1);
}

} /* extern "C" */
