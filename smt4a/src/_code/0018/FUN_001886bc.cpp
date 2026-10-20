#include "common.h"

extern "C" {

void sysFatalBreak(void);
extern s32 DAT_005c0a9c;

/* Returns the word at 0x5C0A9C, running sysFatalBreak first when it is still 0. */
s32 FUN_001886bc(void)
{
    if (DAT_005c0a9c == 0) {
        sysFatalBreak();
    }
    return DAT_005c0a9c;
}

} /* extern "C" */
