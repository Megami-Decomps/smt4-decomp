#include "common.h"

struct OutputWriter;
struct PendingByteRange {
    u8 unk00[0x0c]; // 0x00
    u8 rangeState[0x0c]; // 0x0c
    const u8* begin; // 0x18
    const u8* end;   // 0x1c
};

extern "C" {
void FUN_002ea6bc(OutputWriter* writer, const void* data, u32 size);
void FUN_002ea6cc(OutputWriter* writer);
const void* FUN_002ec674(void* rangeState);

// Write all nonempty blocks, append the pending byte range, and finish the output.
void chunkStreamFlush(PendingByteRange* pending, const void* const* blocks, const u32* sizes, s32 count, OutputWriter* writer)
{
    u32 pendingSize = pending->end - pending->begin;
    for (s32 index = 0; index < count; ++index) {
        if (blocks[index] != NULL && sizes[index] != 0) {
            FUN_002ea6bc(writer, blocks[index], sizes[index]);
        }
    }
    if (pendingSize != 0) {
        FUN_002ea6bc(writer, FUN_002ec674(pending->rangeState), pendingSize);
    }
    FUN_002ea6cc(writer);
}
}
