/* NON_MATCHING: initial source/context save order and data/header registers differ, so the compiler emits two scalar header stores instead of retail's writeback STM pair. */
#include "common.h"

struct UniformContext {
    u8 unk00000[0x12a42]; // 0x00000
    u8 index;             // 0x12a42
};

extern "C" {
u32* FUN_002b7148(UniformContext* context);
void FUN_002af390(u32* begin, u32* end);

// Writes one float32 vertex uniform in the GPU's reversed component order.
void FUN_002b634c(UniformContext* context, const u32 values[4])
{
    u32* begin = FUN_002b7148(context);
    u32* command = begin;
    *command++ = context->index | 0x80000000;
    *command++ = 0x804f02c0;
    *command++ = values[3];
    *command++ = values[2];
    *command++ = values[1];
    *command++ = values[0];
    FUN_002af390(begin, command);
}
}
