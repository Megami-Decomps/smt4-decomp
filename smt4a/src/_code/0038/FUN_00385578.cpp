/* NON_MATCHING: the delay-table copy uses core registers rather than VFP, and the wait phase exchanges two scratch registers. */
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
void lmapRequestTimedEffect(s32 duration, s32 first, s32 second);
void soundApplyValueOrStop(u32 voice, s32 mode);
void lmapClearExtraFlag(void);

enum {
    IDLE_VOICE_OFF,
    IDLE_VOICE_PICK_DELAY,
    IDLE_VOICE_WAITING,
    IDLE_VOICE_PLAYING,
};

/* Wait a randomized idle interval, play a timed voice, and cancel it when the scene stops idling. */
void FUN_00385578(void)
{
    s32 delays[6];
    s32 durations[6];
    memcpy(delays, DAT_00532018.delays, sizeof(delays));
    memcpy(durations, DAT_00532018.durations, sizeof(durations));
    LmapSceneA *scene = g_lmapScene;
    switch (scene->idleVoicePhase) {
    case IDLE_VOICE_OFF:
        break;
    case IDLE_VOICE_PICK_DELAY: {
        s32 delay = delays[randBetween(0, 5)];
        scene = g_lmapScene;
        scene->idleVoicePhase = IDLE_VOICE_WAITING;
        scene->idleVoiceDuration = delay;
        scene->idleVoiceFrame = 0;
        break;
    }
    case IDLE_VOICE_WAITING:
        if ((scene->mode == 1 || scene->mode == 3) &&
            ++scene->idleVoiceFrame >= scene->idleVoiceDuration) {
            s32 duration = durations[randBetween(0, 5)];
            g_lmapScene->idleVoiceDuration = duration;
            lmapRequestTimedEffect(duration, 40, 10);
            u32 voice = sysPlayVoice(0x0100009E);
            scene = g_lmapScene;
            scene->idleVoiceFrame = 0;
            scene->idleVoicePhase = IDLE_VOICE_PLAYING;
            scene->idleVoice = voice;
        }
        break;
    case IDLE_VOICE_PLAYING:
        if (scene->mode == 1 || scene->mode == 3) {
            if (++g_lmapScene->idleVoiceFrame >= g_lmapScene->idleVoiceDuration) {
                if (g_lmapScene->idleVoice != 0)
                    soundApplyValueOrStop(g_lmapScene->idleVoice, 0);
                g_lmapScene->idleVoiceFrame = 0;
                g_lmapScene->idleVoicePhase = IDLE_VOICE_OFF;
            }
        } else {
            lmapClearExtraFlag();
            if (g_lmapScene->idleVoice != 0)
                soundApplyValueOrStop(g_lmapScene->idleVoice, 0);
            g_lmapScene->idleVoiceFrame = 0;
            g_lmapScene->idleVoicePhase = IDLE_VOICE_OFF;
        }
        break;
    }
}
} /* extern "C" */
