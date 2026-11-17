#include "map/mapDepart.h"
#include "game/GameStateA.h"
struct Navigation { u8 unk00[24]; f32 first; u8 gap[44]; f32 second; };
extern "C" {
extern Navigation *g_naviMain;
/* Reads the active navigation state's value. */
f32 FUN_00492b98() { return g_gameState.alternateNaviMap != 0 ? g_naviMain->second : g_naviMain->first; }
}
