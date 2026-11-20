/* NON_MATCHING: nw::snd::Sound3DManager::Initialize. The size and the required size swap registers (retail r5/r6), the
 * pool's element size is a separate `mov r3, #44`, and retail stores bufferSize before initialized and buffer. */
#include "nw/snd/ArchivePool.h"

extern "C" {
void nw_snd_internal_PoolImpl_CreateImpl(void *pool, void *buffer, u32 size, u32 elementSize);
s32 nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(const void *archive, ArchivePoolCountsA *counts);

/* nw_snd_Sound3DManager_GetRequiredMemSize's body: the parameter pool's size for the archive. */
static __inline u32 sound3DRequiredMemSize(const void *archive)
{
    u32 count = 0;
    ArchivePoolCountsA counts;
    if (nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(archive, &counts)) {
        count += counts.firstCount;
        count += counts.secondCount;
        count += counts.thirdCount;
    }
    return count * 0x2c;
}

/* Creates the archive pool once and records bytes remaining after its counted elements. */
u32 nw_snd_Sound3DManager_Initialize(SoundArchivePool *state, const void *archive, void *buffer, u32 size)
{
    if (state->initialized == 1) {
        return 0;
    }
    u32 reservedBytes = sound3DRequiredMemSize(archive);
    nw_snd_internal_PoolImpl_CreateImpl(state->pool, buffer, size, 0x2c);
    state->availableSize = size - reservedBytes;
    state->bufferSize = size;
    state->buffer = buffer;
    state->initialized = 1;
    return 1;
}
}
