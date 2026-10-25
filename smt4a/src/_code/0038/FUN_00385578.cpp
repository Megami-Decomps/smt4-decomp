/* NON_MATCHING: the zero register is hoisted above the phase dispatch and the voice-stop block is duplicated per path where retail shares one copy (the other path jumps back into it). */
#include "map/lmapMain.h"
#include <string.h>

namespace {
// Idle-voice fields follow the canonical scene prefix; do not enlarge the shared type.
struct LmapIdleVoiceScene {
    LmapSceneA scene;
    u32 unk27C;
    s32 duration;
    s32 frame;
    u32 phase;
    u32 voice;
};
struct LmapIdleVoiceTables {
    u8 unk000[0x148];
    s32 delays[6];
    s32 durations[6];
};
typedef char LmapIdleVoiceOffsetsCheck[
    offsetof(LmapIdleVoiceScene, duration) == 0x280 &&
    offsetof(LmapIdleVoiceScene, voice) == 0x28C &&
    offsetof(LmapIdleVoiceTables, durations) == 0x160 ? 1 : -1];
}

extern "C" {
extern LmapSceneA *g_lmapScene;
extern const LmapIdleVoiceTables DAT_00532018;
s32 FUN_00184964(s32 minimum, s32 maximum);
void FUN_002d1f40(s32 duration, s32 first, s32 second);
void FUN_003d2158(u32 voice, s32 mode);
void lmapClearExtraFlag(void);

// Wait a randomized idle interval, play a timed voice, and cancel it when the scene stops idling.
void FUN_00385578(void)
{
    s32 delays[6];
    s32 durations[6];
    memcpy(delays, DAT_00532018.delays, sizeof(delays));
    memcpy(durations, DAT_00532018.durations, sizeof(durations));
    LmapIdleVoiceScene *scene = reinterpret_cast<LmapIdleVoiceScene *>(g_lmapScene);
    switch (scene->phase) {
    case 0:
        break;
    case 1: {
        s32 delay = delays[FUN_00184964(0, 5)];
        scene = reinterpret_cast<LmapIdleVoiceScene *>(g_lmapScene);
        scene->phase = 2;
        scene->duration = delay;
        scene->frame = 0;
        break;
    }
    case 2:
        if ((scene->scene.mainState == 1 || scene->scene.mainState == 3) &&
            ++scene->frame >= scene->duration) {
            s32 duration = durations[FUN_00184964(0, 5)];
            reinterpret_cast<LmapIdleVoiceScene *>(g_lmapScene)->duration = duration;
            FUN_002d1f40(duration, 40, 10);
            u32 voice = sysPlayVoice(0x0100009E);
            scene = reinterpret_cast<LmapIdleVoiceScene *>(g_lmapScene);
            scene->frame = 0;
            scene->phase = 3;
            scene->voice = voice;
        }
        break;
    case 3:
        if (scene->scene.mainState != 1 && scene->scene.mainState != 3) {
            lmapClearExtraFlag();
            scene = reinterpret_cast<LmapIdleVoiceScene *>(g_lmapScene);
        } else if (++scene->frame < scene->duration) {
            return;
        }
        if (scene->voice != 0)
            FUN_003d2158(scene->voice, 0);
        scene = reinterpret_cast<LmapIdleVoiceScene *>(g_lmapScene);
        scene->frame = 0;
        scene->phase = 0;
        break;
    }
}
}
