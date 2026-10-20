#include "shard/Block61a470.h"

extern "C" {

void FUN_0019618c(Pool *pool, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);

/* Forwards its eight arguments to FUN_0019618c together with the global pool. */
void asdGfxCmdBufferForward8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h)
{
    FUN_0019618c(g_asdGfxContext.pool, a, b, c, d, e, f, g, h);
}

} /* extern "C" */
