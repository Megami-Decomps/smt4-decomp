#include "common.h"

extern "C" {

extern u32 *FUN_002542a4(void);

u32 FUN_00290794(int index)
{
    u32 *table = FUN_002542a4();

    return table[index];
}

} /* extern "C" */
