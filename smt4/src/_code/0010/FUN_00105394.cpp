#include "gamedata/MapSaveBlock.h"
#include "game/GameState.h"

extern "C" {

extern int FUN_0010b580(void);

/* Per-frame tick of the map block's countdowns; every 0x709 frames the slower tables count down as well. */
void FUN_00105394(void)
{
    MapSaveBlock *block = gameGetMapBlock();
    int i;

    g_gameState.map.tick = g_gameState.map.tick + 1;
    if (g_gameState.map.tick > 0x708) {
        g_gameState.map.tick = 0;
        for (i = 0; i < 64; i++) {
            if (block->timedFlags[i] != 0 && block->timedFlags[i] != 0xFF) {
                block->timedFlags[i]--;
            }
        }
        for (i = 0; i < 128; i++) {
            if (block->timedCounters[i] != 0) {
                block->timedCounters[i]--;
            }
        }
        for (i = 0; i < 16; i++) {
            if (block->timedValues[i] > 0) {
                block->timedValues[i]--;
            }
        }
    }
    for (i = 0; i < 48; i++) {
        if (block->timers[i] > 0) {
            block->timers[i]--;
        }
    }
    FUN_0010b580();
}

} /* extern "C" */
