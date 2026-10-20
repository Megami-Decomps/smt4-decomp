#include "shard/Shard003E.h"

extern "C" {

typedef struct QueuePair {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
} QueuePair;

typedef struct PairQueue {
    /* 0x000 */ u8 unk000[0x22C];
    /* 0x22C */ QueuePair entries[64];
    /* 0x42C */ s32 count;
} PairQueue;

/* Appends the pair (value, key) to the queue. */
void pairQueueAppend(PairQueue *queue, u32 key, u32 value)
{
    queue->entries[queue->count].first = value;
    queue->entries[queue->count].second = key;
    queue->count = queue->count + 1;
}

} /* extern "C" */
