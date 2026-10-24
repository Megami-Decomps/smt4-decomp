#include "common.h"

struct GameStateRequest {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 requested;
    /* 0x54 */ u8 unk54[0x20];
    /* 0x74 */ s32 argument;
};

extern "C" {

extern GameStateRequest g_gameState;

s32 scrGetArg(s32 index);

/* Script command: raises the game-state request and stores the first argument with it. */
u32 FUN_002fea44(void)
{
    g_gameState.requested = 1;
    g_gameState.argument = scrGetArg(0);
    return 1;
}

} /* extern "C" */
