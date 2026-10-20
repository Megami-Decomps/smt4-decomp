#include "common.h"

extern "C" {

extern u8 *FUN_002a6d50(u32 a, u32 b, u32 c);

void FUN_0038a134(u32 a, u32 b)
{
    u8 *entry = FUN_002a6d50(a, 0x10, b);

    if (entry != NULL) {
        entry[0xd] = 0;
    }
}

} /* extern "C" */
