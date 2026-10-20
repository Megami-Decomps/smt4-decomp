#include "common.h"

extern "C" {

extern u8 *FUN_002c09bc(void);

u8 FUN_002903c8(void)
{
    u8 *base = FUN_002c09bc();

    return (u32)(base[0x24b84] - 1) <= 2;
}

} /* extern "C" */
