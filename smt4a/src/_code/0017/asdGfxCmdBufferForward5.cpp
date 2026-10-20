#include "shard/Block61a470.h"

extern "C" {

void FUN_001962c0(Pool *pool, u32 a, u32 b, u32 c, u32 d, u32 e);

/* Forwards its five arguments to FUN_001962c0 together with the global pool. */
void asdGfxCmdBufferForward5(u32 a, u32 b, u32 c, u32 d, u32 e)
{
    FUN_001962c0(g_asdGfxContext.pool, a, b, c, d, e);
}

} /* extern "C" */
