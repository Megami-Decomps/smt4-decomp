/* NON_MATCHING: register allocation only: retail loads the tick counter into r2 and the 0x708 limit into r3, and the second timer loop counts down in r3; built uses r3/r2 */
#include "common.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

typedef struct FlagsBlock {
    /* 0x000 */ u8 unk000[0xC0C];
    /* 0xC0C */ u8 timersA[64];     /* 0 and 255 stay as they are */
    /* 0xC4C */ u8 timersB[128];
    /* 0xCCC */ u8 unkCCC[0xC4];
    /* 0xD90 */ s16 timersC[16];
    /* 0xDB0 */ u8 unkDB0[0xE4];
    /* 0xE94 */ s32 timersD[48];
} FlagsBlock;

typedef struct GameState {
    /* 0x000 */ u8 unk000[0x254];
    /* 0x254 */ s32 ticks;
} GameState;

#define TIMER_PERIOD 0x708

extern GameState g_gameState;


/* Counts one frame; every TIMER_PERIOD frames the coarse timers tick down, and the fine ones every frame. */
void FUN_00139b6c(void)
{
    FlagsBlock *flags = reinterpret_cast<FlagsBlock *>(gameFlagsGetBlock());
    s32 i;

    if (++g_gameState.ticks > TIMER_PERIOD) {
        g_gameState.ticks = 0;
        for (i = 0; i < 64; i++) {
            if (flags->timersA[i] != 0 && flags->timersA[i] != 255) {
                flags->timersA[i]--;
            }
        }
        for (i = 0; i < 128; i++) {
            if (flags->timersB[i] != 0) {
                flags->timersB[i]--;
            }
        }
        for (i = 0; i < 16; i++) {
            if (flags->timersC[i] > 0) {
                flags->timersC[i]--;
            }
        }
    }
    for (i = 0; i < 48; i++) {
        if (flags->timersD[i] > 0) {
            flags->timersD[i]--;
        }
    }
}

} /* extern "C" */
