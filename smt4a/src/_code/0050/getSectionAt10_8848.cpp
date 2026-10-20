#include "shard/Shard0050.h"

extern "C" {

/* Address of the section the offset word at +0x10 points to. */
u8 *getSectionAt10_8848(u8 *base)
{
    return base + *(s32 *)(base + 0x10);
}

} /* extern "C" */
