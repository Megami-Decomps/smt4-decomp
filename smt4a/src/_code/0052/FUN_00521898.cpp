/* NON_MATCHING: circular-copy recursion has different move ordering and wraparound branch layout. */
#include "shard/CircularTransferQueue.h"

extern "C" void FUN_002e5f10(u8 *, const u8 *, u32, s32);

/* Split wrapped copies and process the fragments in the overlap-safe direction. */
extern "C" void FUN_00521898(CircularByteStorage *storage, u32 destination, u32 source,
                              u32 size, s32 forward)
{
    if (size == 0) {
        return;
    }
    u32 capacity = storage->capacity;
    if (destination + size <= capacity && source + size <= capacity) {
        FUN_002e5f10(storage->bytes + destination, storage->bytes + source, size, forward);
        return;
    }
    u32 first = capacity - (destination + size > capacity ? destination : source);
    u32 nextDestination = destination + first;
    u32 nextSource = source + first;
    if (nextDestination >= capacity) {
        nextDestination -= capacity;
    }
    if (nextSource >= capacity) {
        nextSource -= capacity;
    }
    if (forward == 0) {
        FUN_00521898(storage, nextDestination, nextSource, size - first, 0);
        FUN_00521898(storage, destination, source, first, 0);
    } else {
        FUN_00521898(storage, destination, source, first, 1);
        FUN_00521898(storage, nextDestination, nextSource, size - first, 1);
    }
}
