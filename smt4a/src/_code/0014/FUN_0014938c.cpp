#include "common.h"

extern "C" {

extern s32 DAT_005b4400;

/* Clears the word at 0x005b4400 if it is set. */
void FUN_0014938c(void)
{
    if (DAT_005b4400 != 0) {
        DAT_005b4400 = 0;
    }
}

} /* extern "C" */
