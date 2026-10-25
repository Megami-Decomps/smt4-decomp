/* NON_MATCHING: the header/constant pair now stores with the retail STM; only the order of the two incoming-argument saves (retail mov r5, r0 before mov r4, r1) differs. */
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
    u32 header = context->index | 0x80000000;
    *command++ = header;
    *command++ = 0x804f02c0;
    *command++ = values[3];
    *command++ = values[2];
    *command++ = values[1];
    *command++ = values[0];
    FUN_002af390(begin, command);
}
}
