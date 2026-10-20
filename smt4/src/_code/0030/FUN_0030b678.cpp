#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);

u32 FUN_0030b678(void)
{
    u8 *btl = btlGetMainState();

    scrSetResult((int)*(s16 *)(btl + 0x225a));
    return 1;
}

} /* extern "C" */
