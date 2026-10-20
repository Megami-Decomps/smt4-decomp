#include "shard/Shard0050.h"

extern "C" {

/* Address of the section the offset word at +0x14 points to. */
u8 *getSectionAt14_8600(u8 *base)
{
    return base + *(s32 *)(base + 0x14);
}

} /* extern "C" */
