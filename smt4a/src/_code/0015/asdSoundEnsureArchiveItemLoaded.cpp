#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "shard/S2SoundLoader.h"

struct SoundHandleStateAView {
    u8 unk000[0x324];
    AsdSndSlotA* currentSlotA;
};

struct AsdSoundSystemAView {
    u8 unk000[0x2b8];
    SoundLoader loader;
    u8 unk2c0[0xd40];
    SoundHandleStateAView handles;
};

extern "C" {
extern AsdSoundSystemAView g_asdSoundSystem;
s32 FUN_001787a8(SoundLoader* loader, u32 id, u32 flags);
s32 FUN_001753d4(SoundLoader* loader, u32 id, void* heap, u32 flags, u32 blockSize);

u32 asdSoundEnsureArchiveItemLoaded(u32 id)
{
    AsdSoundSystemAView* system = &g_asdSoundSystem;
    u32 result = 0;
    AsdSndSlotA* slot = g_asdSoundSystem.handles.currentSlotA;
    if (slot != NULL && slot->hasHeap) {
        if (FUN_001787a8(&system->loader, id, 0xffffffff)) {
            result = 1;
        } else {
            result = FUN_001753d4(&system->loader, id, slot->heap, 0xffffffff, 0);
        }
    }
    return result;
}
}
