/* NON_MATCHING: compiler loads a literal 0x1204 and indexes the current-slot field; retail forms sound+0x1000 then loads at0x204. All other default-flag instructions match. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SoundDataResolver;

extern "C" {
extern AsdSoundSystem g_asdSound;
void* FUN_00132da4(SoundDataResolver* resolver, u32 soundId, s32 selector);
bool FUN_002af3b4(SoundDataResolver* resolver, u32 soundId, void* heap, s32 selector, u32 flags);

// Ensures the sound's data is loaded into the current eight-handle slot.
bool asdSndEnsureCurrentSlotData(u32 soundId)
{
    AsdSoundSystem* sound = &g_asdSound;
    bool loaded = false;
    AsdSndSlotB* slot = sound->currentSlotB;
    if (slot != NULL) {
        if (FUN_00132da4(reinterpret_cast<SoundDataResolver*>(sound->dataManager + 0x0c), soundId, -1) != NULL) {
            loaded = true;
        } else {
            loaded = FUN_002af3b4(reinterpret_cast<SoundDataResolver*>(sound->dataManager + 0x0c), soundId, slot, -1, 0);
        }
    }
    return loaded;
}
}
