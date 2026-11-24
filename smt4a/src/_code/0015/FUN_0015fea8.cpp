/* NON_MATCHING: the pool sizes go through plain static helpers that armcc inlines late, which gives retail's reloaded
 * counts and multiplies; remaining: retail rounds the player heap and the last pool (strength-reduced, the 31 kept in sl)
 * inline, where the build inlines those late too and saves one register less. */
#include "nw/snd/ArchivePool.h"
#include "shard/SoundArchiveWrapper.h"

namespace {
static u32 alignSoundPoolBytes(u32 size)
{
    return (size + 31) & ~31u;
}
/* The rounded size of a pool of `count` objects of `size` bytes. */
static u32 soundPoolBytes(u32 count, u32 size)
{
    return alignSoundPoolBytes(count * size);
}
}

extern "C" {
u32 FUN_00194fd8(SoundArchiveWrapper *archive);
s32 nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(SoundArchiveWrapper *archive, ArchivePoolCountsA *counts);

// Include player heaps, the per-sound pools and optional caller data in the required buffer size.
u32 FUN_0015fea8(void *, SoundArchiveWrapperA *archive, u32 userDataSize)
{
    u32 playerCount = FUN_00194fd8(archive);
    u32 size = alignSoundPoolBytes(playerCount * 0x5C);
    u32 index = 0;
    while (index < playerCount) {
        ArchivePlayerParams player = {0, 0};
        if (soundArchiveReadPlayerInfoWithExtension(archive, index | 0x04000000, &player) != 0 && player.playerHeapSize != 0)
            size += player.playableSoundMax * (alignSoundPoolBytes(player.playerHeapSize) + 0x40);
        ++index;
    }
    ArchivePoolCountsA counts;
    if (nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(archive, &counts) != 0) {
        size += soundPoolBytes(counts.firstCount, 0x2D8);
        size += soundPoolBytes(counts.firstCount, 0x88);
        size += soundPoolBytes(counts.thirdCount, 0x1E8);
        size += soundPoolBytes(counts.thirdCount, 0x4C);
        size += soundPoolBytes(counts.secondCount, 0x3298);
        size += soundPoolBytes(counts.unk04, 0x138);
    }
    if (userDataSize != 0)
        size += ((userDataSize + 3) & ~3u) * (counts.firstCount + counts.thirdCount + counts.secondCount);
    return size;
}
}
