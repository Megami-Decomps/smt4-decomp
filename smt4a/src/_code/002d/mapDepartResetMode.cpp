#include "common.h"
#include "game/GameStateA.h"
#include "map/LmapViewGlobals.h"
extern "C" {
/* Clears the active map work, selecting the default mode outside mode one. */
void mapDepartResetMode(void)
{
    if (g_gameState.unk5F0 == 1) {
        DAT_005806a0.view->contextValue = 0;
    } else {
        DAT_005806a0.view->mode = 0;
        DAT_005806a0.view->contextValue = 2;
        DAT_005806a0.view->contextMode = 0;
    }
}
}
