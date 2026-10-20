#include "common.h"

extern "C" {

extern u8 *FUN_002adc88(void);

u32 FUN_00287874(int index)
{
    u8 *base = FUN_002adc88();

    return (base[index * 4 + 0x202] & 2) >> 1;
}

} /* extern "C" */
