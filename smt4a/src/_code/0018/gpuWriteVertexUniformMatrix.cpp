#include "shard/W6_W6Match5_MatrixCommand.h"
#include "shard/W4_W4Match5_DataTable.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "gfx/VertexUniformMatrix.h"

extern "C" {
void asdModelCommitCommandRange(u32 *, u32 *);

// Emit the register-selection header and matrix payload into the GPU command buffer.
void gpuWriteVertexUniformMatrix(MatrixCommandSource *source, const f32 *matrix)
{
    u32 *commands = reinterpret_cast<u32 *>(asdGxGetCommandCursor());
    u32 *cursor = commands;
    gpuAppendVertexUniformMatrix4x4(&cursor, source->registerIndex, matrix);
    asdModelCommitCommandRange(commands, cursor);
}
}
