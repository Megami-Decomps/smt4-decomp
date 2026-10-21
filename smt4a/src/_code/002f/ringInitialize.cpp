/* NON_MATCHING: retail keeps the storage-subobject base in r4 and a stack fill value; default folds the zero into r7, while space builds reorder stores and retain the ring base instead. */
#include "shard/W6_W6Match3_WordRing.h"
#include <memory>

extern "C" {

u32* wordRefMax(u32* first, u32* second);
void* rt_malloc(u32 size);

static inline void initializeRingStorage(WordRing* ring, u32 count, const u32& value)
{
    ring->items = NULL;
    ring->end = NULL;
    ring->storageEnd = NULL;
    u32 minimum = 32;
    u32 storageCapacity = *wordRefMax(&count, &minimum);
    ring->items = (u32*)rt_malloc(storageCapacity * sizeof(u32));
    std::uninitialized_fill_n(ring->items, count, value);
    ring->end = ring->items + count;
    ring->storageEnd = ring->items + storageCapacity;
}

WordRing* ringInitialize(WordRing* ring, u32 capacity)
{
    initializeRingStorage(ring, capacity, 0);
    ring->head = 0;
    ring->tail = 0;
    ring->count = 0;
    ring->capacity = capacity;
    return ring;
}

} // extern "C"
