#include "common.h"

extern "C" {

u8 *FUN_002ede60(u8 *dest, u8 *source);

/* Assigns `c` into the 0x20-byte member of the object FUN_002ede60 returns for the first two arguments. */
void FUN_002f35a4(u8 *a, u8 *b, u8 *c)
{
    u8 *target;

    target = FUN_002ede60(a, b);
    FUN_002ede60(target + 0x20, c);
}

} /* extern "C" */
