/* NON_MATCHING: compiler uses IP for the seek call and compares masked results with INT_MIN; retail calls through R1 and uses signed mask-versus-zero branches, with different argument scheduling. */
#include "nn/Result.h"
#include "shard/W6_W6Match1_PositionedStream.h"

// Seeks to a zero-extended offset, performs a transfer, and normalizes successful results.
extern "C" u32 FUN_002bf040(PositionedStream* stream, u32 offset, void* buffer, u32 size)
{
    u32 result = stream->vtable->seek(stream, static_cast<u64>(offset));
    if (nnResultIsSuccess(result)) {
        u32 completed;
        result = stream->vtable->transfer(stream, &completed, buffer, size);
        if (nnResultIsSuccess(result)) {
            result = 0;
        }
    }
    return result;
}
