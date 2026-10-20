#include "common.h"

extern "C" {

extern u8 *FUN_002adc88(void);

u8 FUN_00241c40(int index)
{
    u8 *base = FUN_002adc88();

    return base[index * 4 + 0x201];
}

} /* extern "C" */
