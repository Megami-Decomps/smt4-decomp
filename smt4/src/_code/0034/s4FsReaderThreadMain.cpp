#include "mobiclip_ctrl/S4FsReader.h"
#include "shard/W6_W6Match2_LongDivision.h"
#include "nn/Result.h"
#include "nn/os/WaitObject.h"
#include "sys/ResultReport.h"

extern "C" {
__value_in_regs LongDivisionResult ll_sdiv(s64 dividend, s64 divisor);
void asdFatalError(void);
void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);

/* The reader thread: refills the ring buffer from the source whenever the player has drained at
 * least one chunk, until a handle signals the stop. */
void s4FsReaderThreadMain(S4FsReader *reader)
{
    for (;;) {
        if (nn::os::WaitAny(reader->wakeup, 2) != 0) {
            break;
        }
        nn_os_CriticalSection_Enter(reader->lock);
        u32 used = (u32)(reader->produced - reader->consumed);
        if (S4_FS_READER_RING_SIZE - used < S4_FS_READER_CHUNK_SIZE) {
            nn_os_CriticalSection_Leave(reader->lock);
            continue;
        }
        s64 remaining = reader->limit - reader->produced;
        u32 size = (u32)remaining;
        if (size > S4_FS_READER_CHUNK_SIZE) {
            size = S4_FS_READER_CHUNK_SIZE;
        }
        u32 room = (u32)(S4_FS_READER_RING_SIZE - ll_sdiv(reader->produced, S4_FS_READER_RING_SIZE).remainder);
        if (size > room) {
            size = room;
        }
        u32 got = reader->source->read(reader->ring + (u32)ll_sdiv(reader->produced, S4_FS_READER_RING_SIZE).remainder, size);
        if (got != size) {
            asdFatalError();
        }
        reader->produced += got;
        nn_os_CriticalSection_Leave(reader->lock);
    }
}

} /* extern "C" */
