/* NON_MATCHING: retail loads limit/requested with four individual loads and compares the buffered and scratch lengths with the operands reversed. */
#include "mobiclip_ctrl/S4FsReader.h"
#include "shard/W6_W6Match2_LongDivision.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "sys/ResultReport.h"
#include <string.h>

extern "C" {
__value_in_regs LongDivisionResult ll_sdiv(s64 dividend, s64 divisor);

/* Hands out the next block of the movie: a pointer into the ring buffer, or into a contiguous
 * copy when the block wraps around the end of the ring. Returns 0 when the movie is used up, the
 * block is not read yet (the reader thread is woken) or the copy cannot be allocated. */
u32 FUN_002227b0(S4FsReader *reader, void **block)
{
    if (reader->limit == reader->requested) {
        return 0;
    }

    u32 chunk = reader->chunkSize;
    u32 size = (u32)reader->limit - (u32)reader->requested;
    if (size > chunk) {
        size = chunk;
    }
    u32 buffered = (u32)(reader->produced - reader->consumed);
    if (size > buffered) {
        s32 result = nn::svc::SignalEvent(reader->dataEvent);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            resultHandleFailure(result, failed);
        }
        return 0;
    }

    u32 offset = (u32)ll_sdiv(reader->consumed, S4_FS_READER_RING_SIZE).remainder;
    u8 *data;
    if (offset + size <= S4_FS_READER_RING_SIZE) {
        data = reader->ring + offset;
    } else {
        if (reader->scratchSize < chunk) {
            if (reader->scratch != NULL) {
                reader->allocator->release(reader->scratch);
            }
            reader->scratch = (u8 *)reader->allocator->allocate(reader->chunkSize, 4);
            if (reader->scratch == NULL) {
                return 0;
            }
            reader->scratchSize = reader->chunkSize;
        }
        u32 head = S4_FS_READER_RING_SIZE - offset;
        memcpy(reader->scratch, reader->ring + offset, head);
        memcpy(reader->scratch + head, reader->ring, size - head);
        data = reader->scratch;
    }
    *block = data;
    return 1;
}

} /* extern "C" */
