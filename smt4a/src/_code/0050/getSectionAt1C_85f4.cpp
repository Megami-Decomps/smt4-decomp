#include "shard/Shard0050.h"

extern "C" {

/* Address of the section the offset word at +0x1c points to. */
u8 *getSectionAt1C_85f4(u8 *base)
{
    return base + *(s32 *)(base + 0x1c);
}

} /* extern "C" */
