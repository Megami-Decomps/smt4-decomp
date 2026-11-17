#include "common.h"
#include "game/GameStateA.h"
#include "map/LmapViewGlobals.h"
extern "C" {
/* Clears the active map work, selecting the default mode outside mode one. */
void mapDepartResetMode(void)
{
    if (g_gameState.unk5F0 == 1) {
        g_lmapViewHolder.view->contextValue = 0;
    } else {
        g_lmapViewHolder.view->mode = 0;
        g_lmapViewHolder.view->contextValue = 2;
        g_lmapViewHolder.view->contextMode = 0;
    }
}
}
