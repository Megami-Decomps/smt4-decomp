#include "common.h"

extern "C" {

extern s32 DAT_00589188;

/* Clears the word at 0x00589188 if it is set. */
void FUN_00149824(void)
{
    if (DAT_00589188 != 0) {
        DAT_00589188 = 0;
    }
}

} /* extern "C" */
