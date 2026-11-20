#include "common.h"

namespace {
struct SoundHandle;
struct SoundSlots {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ SoundHandle *handles[4];
};
struct SoundSlotOwner {
    /* 0x000 */ u8 unk000[0x218];
    /* 0x218 */ SoundSlots *slots;
};
}

extern "C" {
extern SoundSlotOwner g_asdSndSlotSelection;
void basicSoundStopOrFadeOut(SoundHandle *handle, s32 frames);

/* Stops an indexed sound, allowing it to fade over the requested frame count. */
s32 soundStopSlotWithFade(u32 index, s32 frames)
{
    SoundSlots *slots = g_asdSndSlotSelection.slots;
    s32 result = 0;
    if (index >= 4 || slots == NULL) {
        return result;
    }
    if (slots->handles[index] != NULL) {
        basicSoundStopOrFadeOut(slots->handles[index], frames);
    }
    return 1;
}
}
