#include "shard/Shard0043.h"

extern "C" {

extern s32 mul12(u32 index);

/* Address of 12-byte entry `index` of the table at +0x3F94. */
u32 entry3F94Address(u32 base, u32 index)
{
    return mul12(index) + base + 0x3F94;
}

} /* extern "C" */
