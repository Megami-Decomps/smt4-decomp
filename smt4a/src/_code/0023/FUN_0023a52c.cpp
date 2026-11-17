#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {

void FUN_002c5df4(void);

extern struct {
    u8 unk000[0x394];
    s8 unk394;
} g_mapRndMaze;

void FUN_0023a52c(void)
{
    if (g_mapRndMaze.unk394 != 0 && g_gameState.progressEnabled != 0) {
        FUN_002c5df4();
    }
}

} /* extern "C" */
