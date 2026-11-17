#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

/* Stores `value` in the word at 0x38 of the pool, if there is one. */
void FUN_001615e4(u32 value)
{
    if (g_asdGfxContext.cmdBuffer != NULL) {
        g_asdGfxContext.cmdBuffer->unk38 = value;
    }
}

} /* extern "C" */
