#include "nw/snd/ArchivePool.h"

extern "C" {
s32 nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(const void *archive, ArchivePoolCounts *counts);

/* Returns the parameter pool's size for the archive: one 0x2C-byte entry per playable sound. */
u32 nw_snd_Sound3DManager_GetRequiredMemSize(void *manager, const void *archive)
{
    u32 count = 0;
    ArchivePoolCounts counts;
    if (nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(archive, &counts)) {
        count += counts.firstCount;
        count += counts.secondCount;
        count += counts.thirdCount;
    }
    return count * 0x2c;
}

} /* extern "C" */
