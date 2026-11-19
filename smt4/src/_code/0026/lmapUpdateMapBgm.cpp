#include "common.h"
#include "map/LmapMainGlobals.h"
#include "gamedata/Table1bOr1c.h"
#include "mikado/mikadoMain.h"
#include <stddef.h>
#include "game/GameState.h"
#include "code/Code001b.h"

extern "C" {

s32 bgmGetStateById(u32 id);
s32 bgmResumeOrRequestTrack(u32 id);
u16 rosterGetLeaderId(void);

/* Selects the map music from the area, or a story override, and starts it unless it is already
 * playing; releases the music while a script is pending, the music is held or the map suppresses it. */
void lmapUpdateMapBgm(void)
{
    GameState *game = &g_gameState;
    LmapMainState *map = g_lmapMainState;

    if (game->event.scriptPending != 0 || game->event.bgmReleased == 0 || map->bgmSuppressed != 0) {
        bgmReleaseStopped();
        g_gameState.event.bgmReleased = 1;
        return;
    }

    if (map->mapId == 0x66) {
        g_gameState.bgmId = 0x01000055;
    } else if (map->mapId == 0x67) {
        g_gameState.bgmId = 0x01000056;
    } else if (map->areaId == 5) {
        g_gameState.bgmId = 0x01000054;
    } else {
        g_gameState.bgmId = 0x01000053;
    }

    u32 id;
    if (map->unk994 != 1 && map->unk994 != 2 && (id = rosterGetLeaderId()) != 0) {
        const s32 overrideState = table1bOr1cGetRecordValue(id);
        if (overrideState == 1) {
            g_gameState.bgmId = 0x01000037;
        } else if (overrideState == 0) {
            g_gameState.bgmId = 0x01000038;
        }
    }

    const s32 state = bgmGetStateById(g_gameState.bgmId);
    if (state == 0) {
        bgmReleaseStopped();
    } else if (state == 1 || state == 2) {
        return;
    }
    bgmResumeOrRequestTrack(g_gameState.bgmId);
}
}
