#include "common.h"

extern "C" {

void FUN_00195fc8(void);
extern s32 DAT_005c0a9c;

/* Returns the word at 0x5C0A9C, running FUN_00195fc8 first when it is still 0. */
s32 FUN_001886bc(void)
{
    if (DAT_005c0a9c == 0) {
        FUN_00195fc8();
    }
    return DAT_005c0a9c;
}

} /* extern "C" */
