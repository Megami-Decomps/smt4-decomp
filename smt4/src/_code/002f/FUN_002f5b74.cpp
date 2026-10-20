#include "shard/Obj43da28.h"

extern "C" {

/* Byte at +0x494 of the 4-byte slot `index` (0-5) of the object, or 0. */
u8 FUN_002f5b74(u32 index)
{
    u8 value;
    u32 *slot;

    if ((DAT_0043da28.obj != NULL) && (index < 6)) {
        slot = (u32 *)DAT_0043da28.obj + index;
        value = ((u8 *)slot)[0x494];
    } else {
        value = 0;
    }
    return value;
}

} /* extern "C" */
