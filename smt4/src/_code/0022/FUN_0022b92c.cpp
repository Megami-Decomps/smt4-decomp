/* NON_MATCHING: opens a gap of `count` bytes at `position` in a MoLive byte vector (shifting the tail in place, or reallocating with the grown capacity); written from the decompilation, the inlined copy loops (unrolled by two) and the allocation retry layout not compared with retail */
#include "mobiclip/MoLiveContainers.h"

/* A byte vector that draws its storage from a MoLive allocator. */
struct MoLiveByteVector {
    /* 0x00 */ MoLive::Allocator *allocator;
    /* 0x04 */ u8 *data;
    /* 0x08 */ u32 capacity;
    /* 0x0C */ u32 size;
};

extern "C" {
u32 containerGrowCapacity(u32 capacity, u32 required, u32 count, u32 extraA, u32 extraB);

/* Moves `length` bytes from `source` to `destination`, front to back. */
static __inline void copyForward(u8 *destination, const u8 *source, u32 length)
{
    for (u32 i = 0; i < length; i++)
        destination[i] = source[i];
}

/* Moves `length` bytes from `source` to `destination`, back to front (for overlapping ranges). */
static __inline void copyBackward(u8 *destination, const u8 *source, u32 length)
{
    for (u32 i = length; i != 0; i--)
        destination[i - 1] = source[i - 1];
}

/* Allocates `bytes`; reports a failure and gives the caller NULL. */
static __inline u8 *byteVectorAllocate(MoLive::Allocator *allocator, u32 bytes)
{
    u8 *memory = static_cast<u8 *>(allocator->allocate(bytes));
    if (memory == NULL)
        allocator->report(MoLive::g_moLiveOutOfMemoryMessage, bytes);
    return memory;
}

/* Returns 1 on success, 0 when the storage could not be allocated. */
u32 FUN_0022b92c(MoLiveByteVector *vector, u32 position, u32 count, u32 growHint)
{
    u32 gapEnd = position + count;
    u32 newSize = vector->size + count;

    if (vector->capacity >= newSize) {
        /* Enough room: the bytes behind the gap move up, the part that lands on unused storage
         * first, then the overlapping rest. */
        u32 tail = vector->size - position;
        u32 beyond = count < tail ? count : tail;
        u8 *source = vector->data + vector->size - beyond;
        u32 inside = tail - beyond;
        copyForward(vector->data + newSize - beyond, source, beyond);
        if (inside != 0) {
            if (position >= gapEnd)
                copyForward(vector->data + gapEnd, vector->data + position, inside);
            else
                copyBackward(vector->data + gapEnd, vector->data + position, inside);
        }
    } else {
        u32 newCapacity = containerGrowCapacity(vector->capacity, newSize, count, growHint, growHint);
        MoLive::Allocator *allocator = vector->allocator;
        u8 *memory = NULL;
        u32 usable = 0;
        if (newCapacity != 0) {
            memory = byteVectorAllocate(allocator, newCapacity);
            usable = newCapacity;
            if (memory == NULL) {
                if (newSize == newCapacity) {
                    allocator->release(NULL);
                    return 0;
                }
                usable = 0;
                if (newSize != 0) {
                    memory = byteVectorAllocate(allocator, newSize);
                    usable = newSize;
                    if (memory == NULL) {
                        allocator->release(NULL);
                        return 0;
                    }
                }
            }
        }
        copyForward(memory, vector->data, position);
        copyForward(memory + gapEnd, vector->data + position, vector->size - position);
        u8 *oldData = vector->data;
        vector->data = memory;
        vector->capacity = usable;
        allocator->release(oldData);
    }
    vector->size = newSize;
    return 1;
}

} /* extern "C" */
