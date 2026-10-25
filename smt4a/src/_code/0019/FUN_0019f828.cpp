#include "common.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

struct UniformContext {
    u8 unk00000[0x12a42]; // 0x00000
    u8 index;             // 0x12a42
};

extern "C" {
void asdModelCommitCommandRange(u32* begin, u32* end);

// Writes one float32 vertex uniform in the GPU's reversed component order.
void FUN_0019f828(UniformContext* context, const u32 values[4])
{
    u32* begin = reinterpret_cast<u32*>(asdGxGetCommandCursor());
    u32* command = begin;
    u32 header = context->index | 0x80000000;
    *command++ = header;
    *command++ = 0x804f02c0;
    *command++ = values[3];
    *command++ = values[2];
    *command++ = values[1];
    *command++ = values[0];
    asdModelCommitCommandRange(begin, command);
}
}
