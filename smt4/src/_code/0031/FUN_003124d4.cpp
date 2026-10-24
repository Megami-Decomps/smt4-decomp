#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);
extern int scrGetArg(u32 index);

u32 FUN_003124d4(void)
{
    int arg = scrGetArg(0);
    u8 *btl = btlGetMainState();

    scrSetResult(*(s16 *)(btl + 0x1fca) <= arg);
    return 1;
}

} /* extern "C" */
