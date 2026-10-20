#include "shard/Shard0050.h"

extern "C" {

/* Address of the section the offset word at +0x4 points to. */
u8 *getSectionAt4_7dcc(u8 *base)
{
    return base + *(s32 *)(base + 0x4);
}

} /* extern "C" */
