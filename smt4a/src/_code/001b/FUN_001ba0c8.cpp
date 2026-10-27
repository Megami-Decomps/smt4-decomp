/* NON_MATCHING: ring-index updates are scheduled differently (retail pairs the two index stores into one strd and keeps the record argument in r5) */
#include "common.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

/* A 0xb8-byte queued record; the word at 0xb0 chains it to the one pushed after it. */
struct QueuedRecord {
    /* 0x00 */ u8 data[0xb0];
    /* 0xB0 */ QueuedRecord *next;
    /* 0xB4 */ u8 unkB4[4];
};

/* A ring of 96 records guarded by a semaphore. */
struct RecordRing {
    /* 0x0000 */ s32 readIndex;
    /* 0x0004 */ s32 writeIndex;
    /* 0x0008 */ s32 lastIndex; /* the record pushed most recently */
    /* 0x000C */ QueuedRecord records[96];
    /* 0x450C */ u8 unk450C[0x14];
    /* 0x4520 */ u32 semaphore;
};

extern "C" {
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
s32 FUN_0019a364(s32 *count, u32 semaphore, s32 releaseCount);
void nnnstdMemCpy(void *destination, const void *source, u32 bytes);

/* Appends a copy of `record` to the ring (under its semaphore) and returns the stored copy. */
QueuedRecord *FUN_001ba0c8(RecordRing *ring, const QueuedRecord *record)
{
    s32 result = svcWaitSynchronization1(ring->semaphore, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    QueuedRecord *stored;
    if (ring->readIndex == ring->writeIndex) {
        stored = &ring->records[ring->writeIndex];
        nnnstdMemCpy(stored, record, sizeof(QueuedRecord));
        ring->lastIndex = ring->writeIndex++;
        if (ring->writeIndex >= 96) {
            ring->writeIndex = 0;
        }
    } else {
        QueuedRecord *previous = &ring->records[ring->lastIndex];
        stored = &ring->records[ring->writeIndex];
        nnnstdMemCpy(stored, record, sizeof(QueuedRecord));
        ring->lastIndex = ring->writeIndex++;
        if (ring->writeIndex >= 96) {
            ring->writeIndex = 0;
        }
        previous->next = stored;
    }
    s32 released;
    result = FUN_0019a364(&released, ring->semaphore, 1);
    failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    return stored;
}
}
