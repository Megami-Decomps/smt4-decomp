/* NON_MATCHING: Ospace restores the shared loop test, but append argument setup/end-pointer updates still use different registers and two extra instructions. */
#include "common.h"

struct QueuePayload { u32 words[8]; };
struct QueueRecord {
    u8 unk00[0x14];
    QueuePayload payload; // 0x14
};
struct QueueCollection {
    QueueRecord *records; // 0x00
    u32 count; // 0x04
    u8 unk08[8];
    void *mutex; // 0x10
};
struct QueuePayloadVector {
    QueuePayload *begin;
    QueuePayload *end;
    QueuePayload *capacity;
};

extern "C" {
void onlineMutexLock(void *mutex);
void onlineMutexUnlock(void *mutex);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_0030ed3c(QueuePayloadVector *vector, QueuePayload *destination, const QueuePayload *source);
void FUN_00133508(QueuePayloadVector *vector, QueuePayload *position, const QueuePayload *source);

// Append each queued payload to a vector while holding the optional collection mutex.
void FUN_00300252(QueueCollection *source, QueuePayloadVector *destination)
{
    if (source->mutex != NULL) {
        onlineMutexLock(source->mutex);
    }
    for (u32 index = 0; index < source->count; ++index) {
        QueuePayload payload;
        __aeabi_memcpy4(&payload, &source->records[index].payload, sizeof(payload));
        if (destination->end != destination->capacity) {
            FUN_0030ed3c(destination, destination->end++, &payload);
        } else {
            FUN_00133508(destination, destination->end, &payload);
        }
    }
    if (source->mutex != NULL) {
        onlineMutexUnlock(source->mutex);
    }
}
}
