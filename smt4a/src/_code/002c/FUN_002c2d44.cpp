#include "common.h"

extern "C" {

void FUN_002392b8(void);
void FUN_00261984(void);
int infoWinSetTimer(int arg);

int FUN_002c2d44(void)
{
    FUN_002392b8();
    FUN_00261984();
    return infoWinSetTimer(-1);
}

} /* extern "C" */
