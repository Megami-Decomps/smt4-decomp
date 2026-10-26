#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SoundOutputState {
    /* 0x0000 */ u8 unk0000[0x1210];
    /* 0x1210 */ AsdSndSlotC *outputs[2];
};

extern "C" {

extern SoundOutputState g_asdSound;

static __inline AsdSndSlotC *asdSoundGetOutput(u32 index)
{
    if (index == 0 || index == 1) {
        return g_asdSound.outputs[index];
    }
    return NULL;
}

/* Returns the selected one-sound slot flag. */
u8 asdSoundGetOutputSlotFlag(u32 index)
{
    u8 result = 0;
    AsdSndSlotC *slot = asdSoundGetOutput(index);
    if (slot != NULL) {
        result = slot->flag;
    }
    return result;
}

} /* extern "C" */
