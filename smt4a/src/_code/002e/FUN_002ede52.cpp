#include "common.h"

extern "C" {

u32 FUN_002f34ac(void);

/* Returns the low bit of FUN_002f34ac's result flipped. */
u32 FUN_002ede52(void)
{
    u32 value;

    value = FUN_002f34ac();
    return value ^ 1;
}

} /* extern "C" */
