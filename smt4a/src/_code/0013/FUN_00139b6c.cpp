#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/MapSaveBlockA.h"

extern "C" {

#define TIMER_PERIOD 0x708

/* Counts one frame; every TIMER_PERIOD frames the coarse timers tick down, and the fine ones every frame. */
void FUN_00139b6c(void)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    s32 i;

    g_gameState.tick = g_gameState.tick + 1;
    if (g_gameState.tick > TIMER_PERIOD) {
        g_gameState.tick = 0;
        for (i = 0; i < 64; i++) {
            if (flags->timedFlags[i] != 0 && flags->timedFlags[i] != 255) {
                flags->timedFlags[i]--;
            }
        }
        for (i = 0; i < 128; i++) {
            if (flags->timedCounters[i] != 0) {
                flags->timedCounters[i]--;
            }
        }
        for (i = 0; i < 16; i++) {
            if (flags->timedValues[i] > 0) {
                flags->timedValues[i]--;
            }
        }
    }
    for (i = 0; i < 48; i++) {
        if (flags->timers[i] > 0) {
            flags->timers[i]--;
        }
    }
}

} /* extern "C" */
