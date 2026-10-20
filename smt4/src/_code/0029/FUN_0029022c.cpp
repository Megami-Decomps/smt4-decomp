#include "common.h"

extern "C" {

extern s16 *FUN_002adc88(void);

u8 FUN_0029022c(void)
{
    s16 *base = FUN_002adc88();

    return base[0x420] != 0;
}

} /* extern "C" */
