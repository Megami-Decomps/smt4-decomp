/* NON_MATCHING: compiler emits separate header stores and selects different command-buffer registers. */
#include "shard/W6_W6Match5_MatrixCommand.h"
#include "shard/W4_W4Match5_DataTable.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

extern "C" {
void FUN_0019a2ac(u32 *, const f32 *, u32);
void asdModelCommitCommandRange(u32 *, u32 *);

// Emit the register-selection header and matrix payload into the GPU command buffer.
void FUN_00187d90(MatrixCommandSource *source, const f32 *matrix)
{
    u32 *commands = reinterpret_cast<u32 *>(asdGxGetCommandCursor());
    commands[0] = source->registerIndex | 0x80000000;
    commands[1] = 0xf02c0;
    u32 *payload = commands + 2;
    FUN_0019a2ac(payload, matrix, 0xff02c1);
    asdModelCommitCommandRange(commands, payload + 18);
}
}
