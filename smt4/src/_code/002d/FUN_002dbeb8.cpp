#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);
extern int scrGetArg(u32 index);

u32 FUN_002dbeb8(void)
{
    int arg = scrGetArg(0);
    u8 *btl = btlGetMainState();

    scrSetResult((int)(btl[0x44b4] + 1) <= arg);
    return 1;
}

} /* extern "C" */
