/* NON_MATCHING: retail is the inlined STL form (copy via uninitialized_copy plus the leftover element-destroy loop over the old storage); this explicit copy compiles differently */
#include "mobiclip/MoLiveContainers.h"

/* MoLive's growable byte buffer: memory comes from a MoLive::Allocator. */
struct MoLiveByteBuffer {
    /* 0x00 */ MoLive::Allocator *allocator;
    /* 0x04 */ u8 *data;
    /* 0x08 */ u32 capacity;
    /* 0x0C */ s32 size;
};

extern "C" {
/* Grows the buffer to hold at least `newCapacity` bytes, keeping its contents; returns 0 when memory runs out. */
u32 FUN_003fbfd0(MoLiveByteBuffer *buffer, u32 newCapacity)
{
    if (buffer->capacity < newCapacity) {
        MoLive::Allocator *allocator = buffer->allocator;
        u8 *memory = NULL;
        u32 capacity = 0;
        if (newCapacity != 0) {
            memory = static_cast<u8 *>(allocator->allocate(newCapacity));
            capacity = newCapacity;
            if (memory == NULL) {
                allocator->report(MoLive::g_moLiveOutOfMemoryMessage, newCapacity);
                allocator->release(NULL);
                return 0;
            }
        }
        u8 *source = buffer->data;
        u8 *destination = memory;
        for (s32 i = buffer->size; i != 0; --i) {
            if (destination != NULL) {
                *destination = *source;
            }
            ++destination;
            ++source;
        }
        u8 *oldData = buffer->data;
        buffer->data = memory;
        buffer->capacity = capacity;
        allocator->release(oldData);
    }
    return 1;
}
}
