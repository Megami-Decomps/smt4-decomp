/* NON_MATCHING: retail reaches the heap pointer as base + 0x1000 then #0x318 (this loads 0x1318 from the pool) and gives the zero constant and the result swapped registers. */
#include "shard/S2SoundLoader.h"

namespace {
/* nw::snd::SoundArchive::SoundInfo */
struct SoundInfo {
    /* 0x00 */ u32 fileId;
    /* 0x04 */ u32 playerId;
    /* 0x08 */ u8 unk08[0x10];
};

/* nw::snd::SoundArchive::PlayerInfo */
struct PlayerInfo {
    /* 0x00 */ u32 playableSoundMax;
    /* 0x04 */ u32 playerHeapSize;
};

struct AsdSoundSystemHeapView {
    /* 0x000 */ u8 unk000[0x318];
    /* 0x318 */ void *loadHeap;
};

struct AsdSoundSystemLoadView {
    /* 0x0000 */ u8 archive[0x2b8];
    /* 0x02B8 */ SoundLoader loader;
    /* 0x02C0 */ u8 unk2c0[0xd40];
    /* 0x1000 */ AsdSoundSystemHeapView heaps;
};
}

extern "C" {

extern AsdSoundSystemLoadView g_asdSoundSystem;
s32 FUN_00178400(void *archive, u32 soundId, SoundInfo *info);
s32 FUN_00178458(void *archive, u32 playerId, PlayerInfo *info);
s32 FUN_001787a8(SoundLoader *loader, u32 id, u32 flags);
s32 FUN_001753d4(SoundLoader *loader, u32 id, void *heap, u32 flags, u32 blockSize);

/* Make sure a sound's data is loaded: sounds whose player has its own heap need nothing, others load into the shared heap. */
s32 FUN_00151340(u32 soundId)
{
    AsdSoundSystemLoadView *system = &g_asdSoundSystem;
    void *heap = system->heaps.loadHeap;
    s32 result = 0;
    SoundInfo sound;
    PlayerInfo player = {0, 0};

    FUN_00178400(system->archive, soundId, &sound);
    FUN_00178458(system->archive, sound.playerId, &player);
    if (player.playerHeapSize != 0) {
        return 1;
    }
    if (heap != NULL) {
        if (FUN_001787a8(&system->loader, soundId, 0xffffffff)) {
            return 1;
        }
        result = FUN_001753d4(&system->loader, soundId, heap, 0xffffffff, 0);
    }
    return result;
}

} /* extern "C" */
