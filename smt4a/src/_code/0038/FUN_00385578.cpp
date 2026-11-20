/* NON_MATCHING: the zero register is hoisted above the phase dispatch and the voice-stop block is duplicated per path where retail shares one copy (the other path jumps back into it). */
#include "map/LmapGlobals.h"
#include <string.h>

namespace {
struct LmapIdleVoiceTables {
    u8 unk000[0x148];
    s32 delays[6];
    s32 durations[6];
};
typedef char LmapIdleVoiceOffsetsCheck[
    offsetof(LmapIdleVoiceTables, durations) == 0x160 ? 1 : -1];
}

extern "C" {
extern const LmapIdleVoiceTables DAT_00532018;
s32 randBetween(s32 minimum, s32 maximum);
void FUN_002d1f40(s32 duration, s32 first, s32 second);
void soundApplyValueOrStop(u32 voice, s32 mode);
void lmapClearExtraFlag(void);

// Wait a randomized idle interval, play a timed voice, and cancel it when the scene stops idling.
void FUN_00385578(void)
{
    s32 delays[6];
    s32 durations[6];
    memcpy(delays, DAT_00532018.delays, sizeof(delays));
    memcpy(durations, DAT_00532018.durations, sizeof(durations));
    LmapSceneA *scene = g_lmapScene;
    switch (scene->idleVoicePhase) {
    case 0:
        break;
    case 1: {
        s32 delay = delays[randBetween(0, 5)];
        scene = g_lmapScene;
        scene->idleVoicePhase = 2;
        scene->idleVoiceDuration = delay;
        scene->idleVoiceFrame = 0;
        break;
    }
    case 2:
        if ((scene->mode == 1 || scene->mode == 3) &&
            ++scene->idleVoiceFrame >= scene->idleVoiceDuration) {
            s32 duration = durations[randBetween(0, 5)];
            g_lmapScene->idleVoiceDuration = duration;
            FUN_002d1f40(duration, 40, 10);
            u32 voice = sysPlayVoice(0x0100009E);
            scene = g_lmapScene;
            scene->idleVoiceFrame = 0;
            scene->idleVoicePhase = 3;
            scene->idleVoice = voice;
        }
        break;
    case 3:
        if (scene->mode != 1 && scene->mode != 3) {
            lmapClearExtraFlag();
            scene = g_lmapScene;
        } else if (++scene->idleVoiceFrame < scene->idleVoiceDuration) {
            return;
        }
        if (scene->idleVoice != 0)
            soundApplyValueOrStop(scene->idleVoice, 0);
        scene = g_lmapScene;
        scene->idleVoiceFrame = 0;
        scene->idleVoicePhase = 0;
        break;
    }
}
}
