#include "shard/NaviMain.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
extern NaviMainA *g_naviMain;
void menuEnterState11(NaviTransitionState* menu, u32 selection);

// Requests the selected map, or clears the pending request when it is already current.
void naviRequestSelectedMap(void)
{
    u32 alternate = g_gameState.navigation.alternateNaviMap;
    NaviMainA* navi = g_naviMain;
    u32 map;
    if (alternate != 0) {
        map = navi->alternateMap;
    } else {
        map = navi->posX;
    }
    if (navi->currentMap != map) {
        menuEnterState11(&navi->transition, map);
    } else {
        g_gameState.navigation.naviMapPending = 0;
    }
}
}
