/* Apocalypse's field map: the area announcement the scene's step handlers make (the intro camera,
 * lmapIntroCameraStep, twice; the overview point's approach, lmapOverviewPointStep, once). Retail repeats the same
 * inlined sequence at each site: the selected area's sound at the player, the effect, then the voice at
 * the message voice volume before the caller's volume is restored. */
#ifndef SMT4A_MAP_LMAPAREAANNOUNCE_H
#define SMT4A_MAP_LMAPAREAANNOUNCE_H

#include "common.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "map/lmapMain.h"
#include "code/Code0014.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "util/TrigF32.h"
#include "code/Code0013_Smt4a.h"
#include "code/Code0014_Smt4a.h"
#include "code/Code0032_Smt4a.h"
#include "code/Code0033_Smt4a.h"

/* Plays the announcement of the selected area: its first sound and voice, or with `part` 1 its second.
 * __forceinline: retail has the whole sequence inline at all three sites, where armcc's own inlining
 * keeps a function this large with two calls in one unit (lmapIntroCameraStep) out of line; the original was
 * forced inline (or a macro), which compiles the same. */
static __forceinline void lmapAnnounceArea(s32 part, u8 volume)
{
    switch (g_gameState.selectedKind) {
    case 0:
        soundActorStartOnFreeChannel(0x10002c4 + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    case 1:
        soundActorStartOnFreeChannel(0x10002c6 + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    case 2:
        soundActorStartOnFreeChannel(0x10002c8 + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    case 3:
        soundActorStartOnFreeChannel(0x10002ca + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    case 4:
        soundActorStartOnFreeChannel(0x10002cc + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    case 5:
        soundActorStartOnFreeChannel(0x10002d9 + part, soundActorPositionFromArray(&g_lmapScene->pose.position.x));
        break;
    }
    FUN_00324e38(-1);
    libm_sinf(g_lmapScene->pose.heading * 0.017453292f);
    libm_cosf(g_lmapScene->pose.heading * 0.017453292f);
    soundVolumeSettingSet(messageVoiceBankGet());
    sysPlayVoice(0x10002e5 + part);
    soundVolumeSettingSet(volume);
}

#endif
