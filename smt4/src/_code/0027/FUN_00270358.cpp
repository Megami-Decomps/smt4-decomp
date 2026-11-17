#include "gamedata/MapSaveBlock.h"

extern "C" {

extern u64 FUN_00270384(int obj, u32 value);

void FUN_00270358(int obj, u8 value)
{
    u32 arg = (u32)gameGetMapBlock(); /* FUN_00270384 receives the block as a word */
    u64 result = FUN_00270384(obj, arg);

    if ((int)result != 0) {
        *(u8 *)((int)(result >> 0x20) + obj + 0xe14) = value;
    }
}

} /* extern "C" */
