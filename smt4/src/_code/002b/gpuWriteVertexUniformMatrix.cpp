/* NON_MATCHING: retail holds the source in r6, the matrix in r5 and the cursor start in r7, so the two header words go out as one `strd r2, [r0], #8`; the build allocates them differently and uses separate post-indexed stores. */
#include "shard/W6_W6Match5_MatrixCommand.h"

extern "C" {
u32 *asdGxGetCommandCursor(void);
void FUN_0023ae58(u32 *, const f32 *, u32);
void asdModelAdvanceCommandCursorBetween(u32 *, u32 *);

// Emit the register-selection header and matrix payload into the GPU command buffer.
void gpuWriteVertexUniformMatrix(MatrixCommandSource *source, const f32 *matrix)
{
    u32 *start = asdGxGetCommandCursor();
    u32 *commands = start;
    *commands++ = source->registerIndex | 0x80000000;
    *commands++ = 0xf02c0;
    FUN_0023ae58(commands, matrix, 0xff02c1);
    asdModelAdvanceCommandCursorBetween(start, commands + 18);
}
}
