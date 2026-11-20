#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SoundDataResolver;

extern "C" {
extern AsdSoundSystem g_asdSound;
void* soundArchiveLoaderIsItemLoaded(SoundDataResolver* resolver, u32 soundId, s32 selector);
bool nw_snd_internal_SoundArchiveLoader_Load(SoundDataResolver* resolver, u32 soundId, void* heap, s32 selector, u32 flags);

// Ensures the sound's data is loaded into the current eight-handle slot.
bool asdSndEnsureCurrentSlotData(u32 soundId)
{
    AsdSoundSystem* sound = &g_asdSound;
    bool loaded = false;
    AsdSndSlotB* slot = g_asdSound.currentSlotB;
    if (slot != NULL) {
        if (soundArchiveLoaderIsItemLoaded(reinterpret_cast<SoundDataResolver*>(sound->dataManager + 0x0c), soundId, -1) != NULL) {
            loaded = true;
        } else {
            loaded = nw_snd_internal_SoundArchiveLoader_Load(reinterpret_cast<SoundDataResolver*>(sound->dataManager + 0x0c), soundId, slot, -1, 0);
        }
    }
    return loaded;
}
}
