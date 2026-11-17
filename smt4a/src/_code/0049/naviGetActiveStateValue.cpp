#include "common.h"
#include "mapnavi/NaviMainGlobals.h"
#include "game/GameStateA.h"
#include "shard/W6_W6Match7_NumericStepper.h"
extern "C" {
/* Reads the active navigation state's value; callers pass the navigation scene, which is unused. */
u32 naviGetActiveStateValue(void *scene) { return g_gameState.alternateNaviMap != 0 ? g_naviMain->alternateMap : g_naviMain->posX; }
}
