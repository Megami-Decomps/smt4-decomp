#include "shard/W6_W6Match5_MatrixCommand.h"
#include "gfx/VertexUniformMatrix.h"

extern "C" {
u32 *asdGxGetCommandCursor(void);
void asdModelAdvanceCommandCursorBetween(u32 *, u32 *);

// Emit the register-selection header and matrix payload into the GPU command buffer.
void gpuWriteVertexUniformMatrix(MatrixCommandSource *source, const f32 *matrix)
{
    u32 *start = asdGxGetCommandCursor();
    u32 *commands = start;
    gpuAppendVertexUniformMatrix4x4(&commands, source->registerIndex, matrix);
    asdModelAdvanceCommandCursorBetween(start, commands);
}
}
