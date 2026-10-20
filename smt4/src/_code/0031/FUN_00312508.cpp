#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);

u32 FUN_00312508(void)
{
    u8 *btl = btlGetMainState();

    scrSetResult((int)*(s16 *)(btl + 0x4968));
    return 1;
}

} /* extern "C" */
