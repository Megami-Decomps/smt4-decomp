#include "common.h"
#include "game/GameStateA.h"
struct Navigation { u8 unk00[16]; u32 first; u8 gap[44]; u32 second; };
extern "C" {
extern Navigation *g_naviMain;
/* Reads the active navigation state's value. */
u32 naviMainSelectPair() { return g_gameState.alternateNaviMap != 0 ? g_naviMain->second : g_naviMain->first; }
}
