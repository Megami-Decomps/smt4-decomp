/* NON_MATCHING: clamping and duck-state stores use different registers and instruction scheduling. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndDuck g_asdSoundDuck;
extern AsdSndStatus g_asdSoundStatus;

/* Sets up (or, with enable == 0, clears) the ducking of slot A while something louder plays. */
void asdSoundDuckSetup(f32 level, s32 enable, u32 holdFrames, u32 unk08, u32 fadeInFrames, u32 fadeOutFrames)
{
    if (enable != 0) {
        g_asdSoundDuck.flags |= 1;
        g_asdSoundDuck.level = level;
        if (level <= 0.0f) {
            g_asdSoundDuck.level = 0.0f;
        }
        if (g_asdSoundDuck.level > 1.0f) {
            g_asdSoundDuck.level = 1.0f;
        }
        g_asdSoundDuck.holdFrames = holdFrames;
        g_asdSoundDuck.fadeInFrames = fadeInFrames;
        g_asdSoundDuck.fadeOutFrames = fadeOutFrames;
        g_asdSoundDuck.unk08 = unk08;
        if (g_asdSoundStatus.hasStream == 0) {
            return;
        }
        g_asdSoundDuck.active = 1;
    } else {
        g_asdSoundDuck.active = 0;
        g_asdSoundDuck.holdFrames = 0;
        g_asdSoundDuck.level = 0.0f;
        g_asdSoundDuck.fadeInFrames = 0;
        g_asdSoundDuck.fadeOutFrames = 0;
        g_asdSoundDuck.unk08 = 0;
        g_asdSoundDuck.timer = 0;
        g_asdSoundDuck.fading = 0;
        g_asdSoundDuck.flags = 0;
    }
}

} /* extern "C" */
