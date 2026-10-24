/* NON_MATCHING: retail keeps count/value/growth locals in one PUSH-reserved block; taking the count parameter's address produces a separate argument spill area. */
#include "common.h"

struct WordBuffer {
    u32* begin;    // 0x00
    u32* end;      // 0x04
    u32* capacity; // 0x08
};

extern "C" {
u32 _ZN4__rw17__rw_new_capacityISt6vectorIi12AsdAllocatorIiEEEEjjPKT_(u32 capacity, WordBuffer* buffer);
const u32* _ZSt3maxIjERKT_S2_S2_(const u32* first, const u32* second);
void* rt_malloc(u32 size);
void _ZSt20uninitialized_fill_nIPiji12AsdAllocatorIiEEvT_T0_RKT1_RT2_(u32* data, u32 count, const u32* value, WordBuffer* buffer);

// Allocates a word buffer with the requested number of zero-initialized elements.
WordBuffer* FUN_002f1798(WordBuffer* buffer, u32 count)
{
    u32 value = 0;
    buffer->begin = NULL;
    buffer->end = NULL;
    buffer->capacity = NULL;
    u32 grown = _ZN4__rw17__rw_new_capacityISt6vectorIi12AsdAllocatorIiEEEEjjPKT_(0, buffer);
    u32 capacity = *_ZSt3maxIjERKT_S2_S2_(&count, &grown);
    buffer->begin = static_cast<u32*>(rt_malloc(capacity * sizeof(u32)));
    _ZSt20uninitialized_fill_nIPiji12AsdAllocatorIiEEvT_T0_RKT1_RT2_(buffer->begin, count, &value, buffer);
    buffer->capacity = buffer->begin + capacity;
    buffer->end = buffer->begin + count;
    return buffer;
}
}
