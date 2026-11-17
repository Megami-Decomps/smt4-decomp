#include "gamedata/MapSaveBlockA.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"

extern "C" {

s32 gameFlagIsSet(u32);
void btlViewResetDefaults(void);
void FUN_002440f4(void);

// Resume map effects after returning from one of the map-related game states.
void FUN_0029203c(void)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    if (g_gameState.mapId == 5)
        gameFlagSetValue(0x4d0, 0, 1);
    if (flags->pending != 0 &&
        (g_gameState.mapId == 28 || g_gameState.mapId == 29 ||
         g_gameState.mapId == 30 || g_gameState.mapId == 31 || g_gameState.mapId == 32)) {
        gameFlagSetValue(0x4d0, 1, 1);
        flags->pending = 0;
    }
    if (gameFlagIsSet(0x4d0)) {
        btlViewResetDefaults();
        FUN_002440f4();
    }
}
}
