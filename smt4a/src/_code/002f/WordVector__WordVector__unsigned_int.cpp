/* NON_MATCHING: word-vector count/zero-fill register allocation and frame layout differ. */
#include "classes/WordVector.h"
#include <new>

extern "C" {
u32 *wordRefMax(u32 *first, u32 *second);
u32 vectorGrowCapacity_002ff8b4(u32 capacity, const void *context);
void *rt_malloc(u32 bytes);
}

/* Reserves according to the growth policy and value-initializes the requested words. */
WordVector::WordVector(u32 count)
{
    begin = NULL;
    end = NULL;
    capacityEnd = NULL;
    u32 minimum = vectorGrowCapacity_002ff8b4(0, this);
    u32 capacity = *wordRefMax(&count, &minimum);
    u32 *cursor = static_cast<u32 *>(rt_malloc(capacity * sizeof(u32)));
    begin = cursor;
    for (u32 remaining = count; remaining != 0; --remaining, ++cursor) {
        new (cursor) u32();
    }
    capacityEnd = begin + capacity;
    end = begin + count;
}
