/* NON_MATCHING: ring-buffer logic and 64-bit position arithmetic match; armcc hoists the -1 timeout out of the loop (retail rebuilds it with mov r3/stm each pass) and uses ldrd [r4,#8] where retail uses add+ldrd (and the reverse for the produced reload). */
#include "mobiclip_ctrl/S4FsReader.h"
#include "nn/Result.h"
#include "shard/W6_W6Match2_LongDivision.h"
#include "sys/ResultReport.h"

extern "C" {
u32 FUN_0042cd0c(s32 *signalled, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
__value_in_regs LongDivisionResult ll_sdiv(s64 dividend, s64 divisor);
void sysFatalBreak(void);
void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);

/* The reader thread: refills the ring buffer from the source whenever the player has drained at
 * least one chunk, until a handle signals the stop. */
void FUN_00422534(S4FsReader *reader)
{
    for (;;) {
        s32 signalled;
        u32 result = FUN_0042cd0c(&signalled, reader->wakeup, 2, 0, -1);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002e3140(result, failed);
        }
        if (signalled != 0) {
            break;
        }
        nn_os_CriticalSection_Enter(reader->lock);
        u32 used = (u32)(reader->produced - reader->consumed);
        if (S4_FS_READER_RING_SIZE - used < S4_FS_READER_CHUNK_SIZE) {
            nn_os_CriticalSection_Leave(reader->lock);
            continue;
        }
        u32 size = (u32)(reader->limit - reader->produced);
        if (size > S4_FS_READER_CHUNK_SIZE) {
            size = S4_FS_READER_CHUNK_SIZE;
        }
        u32 room = (u32)(S4_FS_READER_RING_SIZE - ll_sdiv(reader->produced, S4_FS_READER_RING_SIZE).remainder);
        if (size > room) {
            size = room;
        }
        u32 got = reader->source->read(reader->ring + (u32)ll_sdiv(reader->produced, S4_FS_READER_RING_SIZE).remainder, size);
        if (got != size) {
            sysFatalBreak();
        }
        reader->produced += got;
        nn_os_CriticalSection_Leave(reader->lock);
    }
}

} /* extern "C" */
