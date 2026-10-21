/* NON_MATCHING: O3 folds the preferred-allocation result tests and if-converts a split-copy branch; virtual-call and ring-state registers differ. O2 may retain retail's branch structure. */
#include "common.h"

class MoLiveAllocator {
public:
    virtual u8 *allocate(u32 bytes) = 0;
    virtual void release(void *memory) = 0;
    virtual void report(const char *format, ...) = 0;
};

struct MoLiveRingBuffer {
    MoLiveAllocator *allocator;
    u8 *data;
    u32 capacity;
    u32 size;
    u32 readOffset;
};

extern "C" {
extern const char DAT_00543e20[];
void *rt_memcpy(void *, const void *, u32 bytes);
}

static __inline u8 *allocateMoLiveBuffer(MoLiveAllocator *allocator, u32 bytes)
{
    if (bytes == 0) {
        return NULL;
    }
    u8 *memory = allocator->allocate(bytes);
    if (memory == NULL) {
        allocator->report(DAT_00543e20, bytes);
    }
    return memory;
}

static __inline void copyMoLiveRange(u8 *destination, const u8 *begin, const u8 *end)
{
    if (begin != end) {
        rt_memcpy(destination, begin, end - begin);
    }
}

// Reallocate the ring storage, preferring the larger capacity and linearizing live bytes.
extern "C" u32 moLiveRingBufferReallocate(MoLiveRingBuffer *ring, u32 minimum, u32 preferred, u32 offset)
{
    MoLiveAllocator *allocator = ring->allocator;
    u8 *memory = NULL;
    u32 capacity = 0;
    if (preferred != 0) {
        memory = allocateMoLiveBuffer(allocator, preferred);
        if (memory == NULL) {
            if (minimum == preferred) {
                allocator->release(memory);
                return 0;
            }
            preferred = minimum;
            memory = allocateMoLiveBuffer(allocator, preferred);
            if (preferred != 0 && memory == NULL) {
                allocator->release(memory);
                return 0;
            }
        }
        capacity = preferred;
    }
    if (ring->size != 0) {
        const u8 *first = ring->data + ring->readOffset;
        if (ring->capacity >= ring->readOffset + ring->size) {
            copyMoLiveRange(memory + offset, first, first + ring->size);
        } else {
            u32 firstBytes = ring->capacity - ring->readOffset;
            u32 secondBytes = ring->size - firstBytes;
            copyMoLiveRange(memory + offset, first, ring->data + ring->capacity);
            const u8 *second = ring->data;
            copyMoLiveRange(memory + offset + firstBytes, second, second + secondBytes);
        }
    }
    u8 *previous = ring->data;
    ring->data = memory;
    ring->capacity = capacity;
    allocator->release(previous);
    return 1;
}
