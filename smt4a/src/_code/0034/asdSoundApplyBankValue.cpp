#include "common.h"

namespace {
struct SoundHandle;
struct SoundSlots {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ SoundHandle *handles[4];
};
struct SoundState {
    /* 0x000 */ u8 unk000[0x324];
    /* 0x324 */ SoundSlots *slots;
};
}

extern "C" {
extern SoundState g_asdSoundHandleState;
void asdSoundObjectStop(SoundHandle *handle, s32 frames);

/* Stops an indexed sound, allowing it to fade over the requested frame count. */
s32 asdSoundApplyBankValue(u32 index, s32 frames)
{
    SoundSlots *slots = g_asdSoundHandleState.slots;
    s32 result = 0;
    if (index >= 4 || slots == NULL) {
        return result;
    }
    if (slots->handles[index] != NULL) {
        asdSoundObjectStop(slots->handles[index], frames);
    }
    return 1;
}
}
