#include "common.h"

extern "C" {

extern u16 *FUN_002adc88(void);

u16 FUN_002903f0(void)
{
    u16 *base = FUN_002adc88();

    return base[0x420];
}

} /* extern "C" */
