/* NON_MATCHING: retail keeps count/value/growth locals in one PUSH-reserved block; taking the count parameter's address produces a separate argument spill area. */
#include "common.h"

struct WordBuffer {
    u32* begin;    // 0x00
    u32* end;      // 0x04
    u32* capacity; // 0x08
};

extern "C" {
u32 vectorGrowCapacity_0030c5b4(u32 capacity, WordBuffer* buffer);
const u32* wordRefMax(const u32* first, const u32* second);
void* rt_malloc(u32 size);
void FUN_0030c59e(u32* data, u32 count, const u32* value, WordBuffer* buffer);

// Allocates a word buffer with the requested number of zero-initialized elements.
WordBuffer* FUN_002f1798(WordBuffer* buffer, u32 count)
{
    u32 value = 0;
    buffer->begin = NULL;
    buffer->end = NULL;
    buffer->capacity = NULL;
    u32 grown = vectorGrowCapacity_0030c5b4(0, buffer);
    u32 capacity = *wordRefMax(&count, &grown);
    buffer->begin = static_cast<u32*>(rt_malloc(capacity * sizeof(u32)));
    FUN_0030c59e(buffer->begin, count, &value, buffer);
    buffer->capacity = buffer->begin + capacity;
    buffer->end = buffer->begin + count;
    return buffer;
}
}
