/* NON_MATCHING: retail uses `bcs 1c` where armcc emits `push {r4, lr}`. */
#include "common.h"

extern "C" {

struct SoundBank {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ void *sounds[4];
};
struct SoundState {
    /* 0x000 */ u8 unk000[0x324];
    /* 0x324 */ SoundBank *bank;
};
extern SoundState g_asdSoundHandleState;
void asdSoundObjectStop(void *sound, s32 value);

s32 asdSoundApplyBankValue(u32 index, s32 value)
{
    SoundBank *bank = g_asdSoundHandleState.bank;
    if (index >= 4 || bank == NULL) {
        return 0;
    }
    if (bank->sounds[index] != NULL) {
        asdSoundObjectStop(bank->sounds[index], value);
    }
    return 1;
}

} /* extern "C" */
