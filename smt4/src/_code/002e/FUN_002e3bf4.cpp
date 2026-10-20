#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);
extern int scrGetArg(void);

u32 FUN_002e3bf4(void)
{
    int arg = scrGetArg();
    u8 *btl = btlGetMainState();

    scrSetResult(*(s16 *)(btl + 0x1fc6) <= arg);
    return 1;
}

} /* extern "C" */
