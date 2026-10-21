/* NON_MATCHING: instruction selection/order differs: retail cmp r0, #0; compiler cmp r0, #2. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SoundOutputState {
    /* 0x0000 */ u8 unk0000[0x1210];
    /* 0x1210 */ AsdSndSlotC *outputs[2];
};

extern "C" {

extern SoundOutputState g_asdSound;

/* Returns the selected one-sound slot flag. */
u8 FUN_0010df80(u32 index)
{
    if (index < 2 && g_asdSound.outputs[index] != NULL) {
        return g_asdSound.outputs[index]->flag;
    }
    return 0;
}

} /* extern "C" */
