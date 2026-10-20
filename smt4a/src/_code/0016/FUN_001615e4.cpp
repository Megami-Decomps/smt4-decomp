#include "shard/Block61a470.h"

extern "C" {

/* Stores `value` in the word at 0x38 of the pool, if there is one. */
void FUN_001615e4(u32 value)
{
    if (g_asdGfxContext.pool != NULL) {
        g_asdGfxContext.pool->unk38 = value;
    }
}

} /* extern "C" */
