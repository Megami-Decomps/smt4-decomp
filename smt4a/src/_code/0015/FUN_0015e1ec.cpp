/* NON_MATCHING: Buffer-size/reservation registers differ, the count multiplication stays inside the successful query branch, and final stores reorder. */
#include "nw/snd/ArchivePool.h"

extern "C" {
void nw_snd_internal_PoolImpl_CreateImpl(void *pool, void *buffer, u32 size, u32 elementSize);
s32 FUN_001784b0(const void *archive, ArchivePoolCounts *counts);

/* Creates the archive pool once and records bytes remaining after its counted elements. */
u32 FUN_0015e1ec(SoundArchivePool *state, const void *archive, void *buffer, u32 size)
{
    if (state->initialized == 1) {
        return 0;
    }
    u32 reservedBytes = 0;
    ArchivePoolCounts counts;
    if (FUN_001784b0(archive, &counts)) {
        reservedBytes = counts.thirdCount + (counts.firstCount + counts.secondCount);
        reservedBytes *= 0x2c;
    }
    nw_snd_internal_PoolImpl_CreateImpl(state->pool, buffer, size, 0x2c);
    state->availableSize = size - reservedBytes;
    state->bufferSize = size;
    state->buffer = buffer;
    state->initialized = 1;
    return 1;
}
}
