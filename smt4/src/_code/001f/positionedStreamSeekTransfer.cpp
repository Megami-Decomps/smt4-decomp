#include "shard/W6_W6Match1_PositionedStream.h"

// Seeks to a zero-extended offset, performs a transfer, and normalizes successful results.
extern "C" u32 positionedStreamSeekTransfer(PositionedStream* stream, u32 offset, void* buffer, u32 size)
{
    u64 position = offset;
    s32 result = stream->vtable->seek(stream, position);
    if ((s32)(result & 0x80000000) >= 0) {
        u32 completed;
        result = stream->vtable->transfer(stream, &completed, buffer, size);
        if ((s32)(result & 0x80000000) >= 0) {
            result = 0;
        }
    }
    return result;
}
