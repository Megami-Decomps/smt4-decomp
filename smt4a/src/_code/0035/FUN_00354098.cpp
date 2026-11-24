#include "map/LmapGlobals.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
void lmapClearExtraFlag();
void soundApplyValueOrStop(u32 handle, s32 enabled);

enum {
    IDLE_VOICE_OFF = 0,
    IDLE_VOICE_PICK_DELAY = 1,
    IDLE_VOICE_PLAYING = 3
};

/* Enables ambient voice during selected story intervals; otherwise stops and resets it. */
void FUN_00354098(void)
{
    bool enable = false;
    switch (g_gameState.mapId) {
    case 1:
        if (g_gameState.areaId == 1)
            return;
        enable = gameFlagIsSet(0x72) && !gameFlagIsSet(0xB1);
        break;
    case 2:
        if (g_gameState.areaId == 5)
            return;
        enable = !gameFlagIsSet(0x91);
        break;
    case 4:
        if (g_gameState.areaId == 2)
            return;
        enable = gameFlagIsSet(0xF4) && !gameFlagIsSet(0xF6);
        break;
    }

    if (enable) {
        if (g_lmapScene->idleVoicePhase == IDLE_VOICE_OFF)
            g_lmapScene->idleVoicePhase = IDLE_VOICE_PICK_DELAY;
        return;
    }
    switch (g_lmapScene->idleVoicePhase) {
    case IDLE_VOICE_OFF:
        return;
    case IDLE_VOICE_PLAYING:
        lmapClearExtraFlag();
        if (g_lmapScene->idleVoice != 0)
            soundApplyValueOrStop(g_lmapScene->idleVoice, 0);
        break;
    }

    g_lmapScene->idleVoiceDuration = 0;
    g_lmapScene->idleVoicePhase = IDLE_VOICE_OFF;
    g_lmapScene->idleVoiceFrame = 0;
    g_lmapScene->idleVoice = 0;
}

} /* extern "C" */
