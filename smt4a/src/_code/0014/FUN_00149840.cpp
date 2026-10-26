#include "shard/Block61a470.h"

extern "C" {
void FUN_00149840(u32 first, u32 second)
{
    u32 *base = (u32 *)&g_asdGfxContext;
    base[g_asdGfxContext.state + 0x4D] = first;
    base[g_asdGfxContext.state + 0x50] = second;
}
}
