#include "common.h"

struct GameStateSlot {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ s32 value;
};

extern "C" {

extern GameStateSlot g_gameState;

void bgmResumeOrRequestTrack(s32 value);

/* Script command: hands the game-state word at 0x2c to bgmResumeOrRequestTrack. */
u32 FUN_0039bc88(void)
{
    bgmResumeOrRequestTrack(g_gameState.value);
    return 1;
}

} /* extern "C" */
