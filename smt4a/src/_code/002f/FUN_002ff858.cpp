/* NON_MATCHING: count is homed in a larger frame, the zero-fill loop rotates, and capacity/zero registers differ. */
#include "common.h"
#include <new>

struct WordVector {
    /* 0x00 */ u32* begin;
    /* 0x04 */ u32* end;
    /* 0x08 */ u32* capacityEnd;
};

extern "C" {
u32* wordRefMax(u32* first, u32* second);
void* rt_malloc(u32 size);
u32 vectorGrowCapacity_002ff8b4(u32 capacity, WordVector* vector);

// Allocate a word vector and value-initialize its requested elements.
WordVector* FUN_002ff858(WordVector* vector, u32 count)
{
    vector->begin = NULL;
    vector->end = NULL;
    vector->capacityEnd = NULL;
    u32 minimum = vectorGrowCapacity_002ff8b4(0, vector);
    u32 capacity = *wordRefMax(&count, &minimum);
    u32* cursor = static_cast<u32*>(rt_malloc(capacity * sizeof(u32)));
    vector->begin = cursor;
    for (u32 remaining = count; remaining != 0; --remaining) {
        new (cursor) u32();
        ++cursor;
    }
    vector->capacityEnd = vector->begin + capacity;
    vector->end = vector->begin + count;
    return vector;
}
}
