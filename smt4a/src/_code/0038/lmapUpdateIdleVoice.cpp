#include "map/LmapGlobals.h"
#include <string.h>

namespace {
/* Unit-local: the map's idle-voice timing tables, following a table of floats in read-only data. */
struct LmapIdleVoiceTables {
    /* 0x000 */ u8 unk000[0x148];
    /* 0x148 */ s32 delays[6];
    /* 0x160 */ s32 durations[6];
};
typedef char LmapIdleVoiceOffsetsCheck[
    offsetof(LmapIdleVoiceTables, durations) == 0x160 ? 1 : -1];
}

extern "C" {
extern const LmapIdleVoiceTables DAT_00532018;
s32 randBetween(s32 minimum, s32 maximum);
void lmapRequestTimedEffect(s32 id, u32 amount, s32 priority);
void soundApplyValueOrStop(u32 voice, s32 mode);
void lmapClearExtraFlag(void);

enum {
    IDLE_VOICE_OFF,
    IDLE_VOICE_PICK_DELAY,
    IDLE_VOICE_WAITING,
    IDLE_VOICE_PLAYING,
};

/* Wait a randomized idle interval, play a timed voice, and cancel it when the scene stops idling. */
void lmapUpdateIdleVoice(void)
{
    s32 delays[6];
    s32 durations[6];
    memcpy(delays, DAT_00532018.delays, sizeof(delays));
    memcpy(durations, DAT_00532018.durations, sizeof(durations));
    switch (g_lmapScene->idleVoicePhase) {
    case IDLE_VOICE_OFF:
        break;
    case IDLE_VOICE_PICK_DELAY:
        g_lmapScene->idleVoiceDuration = delays[randBetween(0, 5)];
        g_lmapScene->idleVoicePhase = IDLE_VOICE_WAITING;
        g_lmapScene->idleVoiceFrame = 0;
        break;
    case IDLE_VOICE_WAITING:
        if ((g_lmapScene->mode == 1 || g_lmapScene->mode == 3) &&
            ++g_lmapScene->idleVoiceFrame >= g_lmapScene->idleVoiceDuration) {
            s32 duration = durations[randBetween(0, 5)];
            g_lmapScene->idleVoiceDuration = duration;
            lmapRequestTimedEffect(duration, 40, 10);
            u32 voice = sysPlayVoice(0x0100009E);
            g_lmapScene->idleVoiceFrame = 0;
            g_lmapScene->idleVoicePhase = IDLE_VOICE_PLAYING;
            g_lmapScene->idleVoice = voice;
        }
        break;
    case IDLE_VOICE_PLAYING:
        if (g_lmapScene->mode == 1 || g_lmapScene->mode == 3) {
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
