#include "common.h"

extern "C" {

int scrSetResult(u32 result);
extern u8 *btlGetMainState(void);
extern int scrGetArg(u32 index);

u32 FUN_002f12c8(void)
{
    u8 *btl = btlGetMainState();
    int index = scrGetArg(0);

    scrSetResult(*(u32 *)(btl + index * 4 + 0x22a8));
    return 1;
}

} /* extern "C" */
