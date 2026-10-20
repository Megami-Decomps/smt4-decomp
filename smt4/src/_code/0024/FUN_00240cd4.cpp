#include "common.h"

extern "C" {

extern int FUN_002adc88(void);

int FUN_00240cd4(int index)
{
    int base = FUN_002adc88();

    return base + index * 4 + 0x200;
}

} /* extern "C" */
