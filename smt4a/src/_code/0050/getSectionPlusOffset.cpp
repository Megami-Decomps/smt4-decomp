#include "shard/Shard0050.h"

extern "C" {

u8 *getSectionPlusOffset(u8 *base, s32 offset)
{
    return *(u8 **)(base + 4) + offset;
}

} /* extern "C" */
