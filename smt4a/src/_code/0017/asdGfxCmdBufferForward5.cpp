#include "shard/Block61a470.h"

extern "C" {

void asdCmdBufferAppendTextureTransfer(Pool *pool, u32 a, u32 b, u32 c, u32 d, u32 e);

/* Forwards its five arguments to asdCmdBufferAppendTextureTransfer together with the global pool. */
void asdGfxCmdBufferForward5(u32 a, u32 b, u32 c, u32 d, u32 e)
{
    asdCmdBufferAppendTextureTransfer(g_asdGfxContext.pool, a, b, c, d, e);
}

} /* extern "C" */
