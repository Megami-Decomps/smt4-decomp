/* NON_MATCHING: storage argument and byte-clear loop registers differ from retail. */
#include "common.h"

// Local view of the allocator's buffer bookkeeping.
struct AllocatorBufferView {
    u8 unk00[8];
    u8 *readPosition; // 0x08
    u8 unk0c[8];
    u8 *writePosition; // 0x14
    u8 *storage; // 0x18
    u8 *mappedStorage; // 0x1c
    u32 size; // 0x20
};

extern "C" {
u8 *FUN_004387f0(u8 *, u32);

// Map a backing buffer and optionally clear its bytes before resetting cursors.
s32 FUN_00434d04(AllocatorBufferView *buffer, u8 *storage, u32 size, s32 clear)
{
    buffer->storage = storage;
    buffer->size = size;
    buffer->mappedStorage = FUN_004387f0(storage, (size + 15) >> 4);
    if (buffer->mappedStorage == NULL)
        return 0;
    if (clear != 0) {
        for (u32 index = 0; index < size; ++index)
            buffer->mappedStorage[index] = 0;
    }
    buffer->readPosition = buffer->storage;
    buffer->writePosition = buffer->storage;
    return 1;
}
}
