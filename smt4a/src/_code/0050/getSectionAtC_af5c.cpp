#include "shard/Shard0050.h"

extern "C" {

/* Address of the section the offset word at +0xc points to. */
u8 *getSectionAtC_af5c(u8 *base)
{
    return base + *(s32 *)(base + 0xc);
}

} /* extern "C" */
