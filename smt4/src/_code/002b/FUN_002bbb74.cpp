/* NON_MATCHING: compiler emits separate header stores and selects different command-buffer registers. */
#include "shard/W6_W6Match5_MatrixCommand.h"

extern "C" {
u32 *FUN_002b7148(void);
void FUN_0023ae58(u32 *, const f32 *, u32);
void FUN_002af390(u32 *, u32 *);

// Emit the register-selection header and matrix payload into the GPU command buffer.
void FUN_002bbb74(MatrixCommandSource *source, const f32 *matrix)
{
    u32 *commands = FUN_002b7148();
    commands[0] = source->registerIndex | 0x80000000;
    commands[1] = 0xf02c0;
    u32 *payload = commands + 2;
    FUN_0023ae58(payload, matrix, 0xff02c1);
    FUN_002af390(commands, payload + 18);
}
}
