/* NON_MATCHING: retail uses ldr r0, [pc, #144] where the compiled block uses ldr ip, [pc, #148]. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

union DuckLevelBits {
    f32 value;
    s32 bits;
};

extern "C" {
extern AsdSndDuck g_asdSoundDuck;
extern AsdSndStatusApoc g_asdSoundStatus;

void asdSoundDuckSetup(f32 level, s32 enable, u32 holdFrames,
                       u32 mode, u32 fadeInFrames, u32 fadeOutFrames)
{
    if (enable != 0) {
        g_asdSoundDuck.flags |= 1;
        g_asdSoundDuck.level = level;
        if (level <= 0.0f) {
            level = 0.0f;
        }
        g_asdSoundDuck.level = level;

        DuckLevelBits clampedLevel;
        clampedLevel.value = level;
        if (clampedLevel.bits > 0x3F800000) {
            level = 1.0f;
        }
        g_asdSoundDuck.level = level;
        g_asdSoundDuck.holdFrames = holdFrames;
        g_asdSoundDuck.fadeInFrames = fadeInFrames;
        g_asdSoundDuck.fadeOutFrames = fadeOutFrames;
        g_asdSoundDuck.unk08 = mode;

        if (g_asdSoundStatus.hasStream != 0) {
            g_asdSoundDuck.active = 1;
        }
    } else {
        g_asdSoundDuck.holdFrames = 0;
        g_asdSoundDuck.level = 0.0f;
        g_asdSoundDuck.fadeInFrames = 0;
        g_asdSoundDuck.fadeOutFrames = 0;
        g_asdSoundDuck.unk08 = 0;
        g_asdSoundDuck.timer = 0;
        g_asdSoundDuck.fading = 0;
        g_asdSoundDuck.flags = 0;
        g_asdSoundDuck.active = 0;
    }
}
}
