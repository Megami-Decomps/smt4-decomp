/* NON_MATCHING: signed masked-result checks match; seek callback uses IP rather than R1 and buffer-size setup is scheduled differently. */
#include "shard/W6_W6Match1_PositionedStream.h"

// Seeks to a zero-extended offset, performs a transfer, and normalizes successful results.
extern "C" u32 FUN_001ffb70(PositionedStream* stream, u32 offset, void* buffer, u32 size)
{
    s32 result = stream->vtable->seek(stream, static_cast<u64>(offset));
    if ((s32)(result & 0x80000000) >= 0) {
        u32 completed;
        result = stream->vtable->transfer(stream, &completed, buffer, size);
        if ((s32)(result & 0x80000000) >= 0) {
            result = 0;
        }
    }
    return result;
}
