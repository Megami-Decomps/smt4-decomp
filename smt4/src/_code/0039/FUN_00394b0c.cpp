#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

/* The battle main state: only the turn counter at 0x1FC4 is named. */

u32 messageVoiceBankGet(void);
void voiceRequestPlayFile(s32 a, u32 id, u32 value, s32 b, f32 x, f32 y);

/* Plays one of two sounds, chosen by whether the battle count is at most 1. */
void FUN_00394b0c(void)
{
    if (btlGetMainState()->eventCount <= 1) {
        voiceRequestPlayFile(1, 0x7A576, messageVoiceBankGet(), 4, 0.707f, 0.707f);
    } else {
        voiceRequestPlayFile(1, 0x7A5D0, messageVoiceBankGet(), 4, 0.707f, 0.707f);
    }
}

} /* extern "C" */
