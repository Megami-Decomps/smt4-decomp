/* NON_MATCHING: pool-count common loads and multiply strength reduction differ; -O2 retains multiplies but changes frame/register allocation. */
#include "nw/snd/ArchivePool.h"
#include "shard/SoundArchiveWrapper.h"

namespace {
struct ArchivePlayerInfo {
    u32 playableSoundMax;
    u32 playerHeapSize;
};
static __inline u32 alignSoundPoolBytes(u32 size)
{
    return (size + 31) & ~31u;
}
}

extern "C" {
u32 FUN_00194fd8(SoundArchiveWrapper *archive);
s32 FUN_00178458(SoundArchiveWrapper *archive, u32 playerId, ArchivePlayerInfo *info);
s32 FUN_001784b0(SoundArchiveWrapper *archive, ArchivePoolCounts *counts);

// Include player heaps, the per-sound pools and optional caller data in the required buffer size.
u32 FUN_0015fea8(void *, SoundArchiveWrapper *archive, u32 userDataSize)
{
    u32 playerCount = FUN_00194fd8(archive);
    u32 size = alignSoundPoolBytes(playerCount * 0x5C);
    for (u32 index = 0; index < playerCount; ++index) {
        ArchivePlayerInfo player = {0, 0};
        if (FUN_00178458(archive, index | 0x04000000, &player) != 0 && player.playerHeapSize != 0)
            size += player.playableSoundMax * (alignSoundPoolBytes(player.playerHeapSize) + 0x40);
    }
    ArchivePoolCounts counts;
    if (FUN_001784b0(archive, &counts) != 0) {
        size += alignSoundPoolBytes(counts.firstCount * 0x2D8);
        size += alignSoundPoolBytes(counts.firstCount * 0x88);
        size += alignSoundPoolBytes(counts.thirdCount * 0x1E8);
        size += alignSoundPoolBytes(counts.thirdCount * 0x4C);
        size += alignSoundPoolBytes(counts.secondCount * 0x3298);
        size += alignSoundPoolBytes(counts.unk04 * 0x138);
    }
    if (userDataSize != 0)
        size += ((userDataSize + 3) & ~3u) * (counts.firstCount + counts.thirdCount + counts.secondCount);
    return size;
}
}
