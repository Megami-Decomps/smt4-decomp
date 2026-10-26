/* NON_MATCHING: the clamp now compiles to retail's vmovle (ternary form); retail uses r0/r1 for the sound-state base and shares the active-flag store between both arms, the build uses ip and a separate store. */
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
        level = level > 0.0f ? level : 0.0f;
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
