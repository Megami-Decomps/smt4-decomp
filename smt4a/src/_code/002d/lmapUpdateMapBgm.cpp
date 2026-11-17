#include "common.h"
#include "game/GameStateA.h"
#include "mikado/mikadoMain.h"

// This music gate lies beyond the shared map-main state prefix.
struct MapBgmGate { u8 unk000[0x9e1]; s8 blocked; };
extern "C" {
extern MapBgmGate *g_lmapMainState;
s32 gameFlagIsSet(u32 flag);
s32 bgmGetStateById(u32 id);
void bgmResumeOrRequestTrack(u32 id);

// Select the map music variant from story flags, avoiding restarts while it is active.
void lmapUpdateMapBgm()
{
    MapBgmGate *gate = g_lmapMainState;
    GameStateA *game = &g_gameState;
    if (!game->scriptPending && game->bgmReleased && !gate->blocked) {
        g_gameState.bgmId = 0x100003e;
        if (gameFlagIsSet(0x137) && !gameFlagIsSet(0x189)) {
            g_gameState.bgmId = 0x1000074;
            if (gameFlagIsSet(0x147) && !gameFlagIsSet(0x171))
                g_gameState.bgmId = 0x100003e;
        }
        s32 state = bgmGetStateById(g_gameState.bgmId);
        if (state == 0) {
            bgmReleaseStopped();
        } else if (state == 1 || state == 2) {
            return;
        }
        bgmResumeOrRequestTrack(g_gameState.bgmId);
    } else {
        bgmReleaseStopped();
        g_gameState.bgmReleased = 1;
    }
}
}
