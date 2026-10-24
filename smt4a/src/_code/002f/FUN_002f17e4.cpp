/* NON_MATCHING: retail keeps count/value/growth locals in one PUSH-reserved block; taking the count parameter's address produces a separate argument spill area. */
#include "common.h"

struct ByteBuffer {
    u8* begin;    // 0x00
    u8* end;      // 0x04
    u8* capacity; // 0x08
};

extern "C" {
u32 bufGrowCapacity(u32 capacity, ByteBuffer* buffer);
const u32* _ZSt3maxIjERKT_S2_S2_(const u32* first, const u32* second);
void* rt_malloc(u32 size);
void FUN_0030c588(u8* data, u32 count, const u8* value, ByteBuffer* buffer);

// Allocates a byte buffer with the requested number of zero-initialized bytes.
ByteBuffer* FUN_002f17e4(ByteBuffer* buffer, u32 count)
{
    u8 value = 0;
    buffer->begin = NULL;
    buffer->end = NULL;
    buffer->capacity = NULL;
    u32 grown = bufGrowCapacity(0, buffer);
    u32 capacity = *_ZSt3maxIjERKT_S2_S2_(&count, &grown);
    buffer->begin = static_cast<u8*>(rt_malloc(capacity));
    FUN_0030c588(buffer->begin, count, &value, buffer);
    buffer->capacity = buffer->begin + capacity;
    buffer->end = buffer->begin + count;
    return buffer;
}
}
