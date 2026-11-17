#include "common.h"
#include "mapnavi/NaviMainGlobals.h"
#include "game/GameStateA.h"
extern "C" {
/* Reads the active navigation state's value. */
u32 naviMainSelectPair() { return g_gameState.alternateNaviMap != 0 ? g_naviMain->alternatePosY : g_naviMain->posY; }
}
