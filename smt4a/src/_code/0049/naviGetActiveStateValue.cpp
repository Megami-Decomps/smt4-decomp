#include "common.h"
#include "shard/naviGetActiveStateValue.h"
struct GameState { u8 unk000[1120]; u8 alternate; };
struct Navigation { u8 unk00[12]; u32 first; u8 gap[44]; u32 second; };
extern "C" {
extern GameState g_gameState;
extern Navigation *g_naviMain;
/* Reads the active navigation state's value. */
u32 naviGetActiveStateValue() { return g_gameState.alternate != 0 ? g_naviMain->second : g_naviMain->first; }
}
