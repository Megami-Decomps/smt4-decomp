/* NON_MATCHING: retail uses push {r2, r3, r4, lr} where the compiled block uses push {r0, r1, r2, r3, lr}. */
#include "common.h"

extern "C" s32 FUN_0030a318(u32* context, u32 value, u32* entry);

extern "C" void FUN_001322b6(u32 value, const u32* entry, u32 unused, u32 context)
{
    u32 entryCopy = *entry;
    FUN_0030a318(&context, value, &entryCopy);
}
