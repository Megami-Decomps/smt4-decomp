#include "common.h"
#include "mikado/mikadoMain.h"

// This music gate lies beyond the shared map-main state prefix.
struct MapBgmGate { u8 unk000[0x9e1]; s8 blocked; };
extern "C" {
extern MapBgmGate *g_lmapMainState;
/* The fields of g_gameState this gate uses. */
struct GameStateMusicView {
    u8 unk00[0x2c];
    u32 mapBgm;       // 0x2c
    u8 unk30[0x14d - 0x30];
    s8 musicPending;  // 0x14d
    u8 unk14e[0x17a - 0x14e];
    s8 musicLocked;   // 0x17a
};
extern GameStateMusicView g_gameState;
s32 gameFlagIsSet(u32 flag);
s32 bgmGetStateById(u32 id);
void FUN_003d4c68(u32 id);

// Select the map music variant from story flags, avoiding restarts while it is active.
void FUN_002df914()
{
    MapBgmGate *gate = g_lmapMainState;
    GameStateMusicView *game = &g_gameState;
    if (!game->musicLocked && game->musicPending && !gate->blocked) {
        g_gameState.mapBgm = 0x100003e;
        if (gameFlagIsSet(0x137) && !gameFlagIsSet(0x189)) {
            g_gameState.mapBgm = 0x1000074;
            if (gameFlagIsSet(0x147) && !gameFlagIsSet(0x171))
                g_gameState.mapBgm = 0x100003e;
        }
        s32 state = bgmGetStateById(g_gameState.mapBgm);
        if (state == 0) {
            bgmReleaseStopped();
        } else if (state == 1 || state == 2) {
            return;
        }
        FUN_003d4c68(g_gameState.mapBgm);
    } else {
        bgmReleaseStopped();
        g_gameState.musicPending = 1;
    }
}
}
