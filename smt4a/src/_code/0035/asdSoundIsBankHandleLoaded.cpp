/* NON_MATCHING: retail uses `mov r2, #0` where armcc emits `mov r1, #0`. */
#include "common.h"

extern "C" {

struct SoundBank { u8 unk00[0x20]; u32 handles[16]; };
struct SoundState { u8 unk000[0x318]; SoundBank *bank; };
extern SoundState g_asdSoundHandleState;

s32 asdSoundIsBankHandleLoaded(u32 index)
{
    SoundBank *bank = g_asdSoundHandleState.bank;
    s32 loaded = 0;
    if (index < 16 && bank != NULL && bank->handles[index] != 0) {
        loaded = 1;
    }
    return loaded;
}

} /* extern "C" */
