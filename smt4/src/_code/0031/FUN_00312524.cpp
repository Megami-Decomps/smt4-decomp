#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);

u32 FUN_00312524(void)
{
    u8 *btl = btlGetMainState();

    scrSetResult((int)*(s16 *)(btl + 0x496a));
    return 1;
}

} /* extern "C" */
