#include "map/mapDepart.h"
#include "mapnavi/NaviMainGlobals.h"
#include "game/GameStateA.h"
extern "C" {
/* Reads the active navigation state's value. */
f32 FUN_00492b98() { return g_gameState.alternateNaviMap != 0 ? g_naviMain->alternateArgumentValue : g_naviMain->argumentValue; }
}
