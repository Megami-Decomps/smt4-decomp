#include "common.h"

extern "C" {
void *FUN_0047e690(u32 owner, u32 source, u32 options, f32 scale);

/* Creates the selection with its default scale. */
void *FUN_0047f780(u32 owner, u32 source, u32 options)
{
    return FUN_0047e690(owner, source, options, 0.8f);
}
}
