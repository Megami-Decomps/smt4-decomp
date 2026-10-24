#include "common.h"

struct GameStateView {
    /* 0x000 */ u8 unk000[0x3F5];
    /* 0x3F5 */ u8 flag;
    /* 0x3F6 */ u8 unk3F6[2];
    /* 0x3F8 */ s32 value0;
    /* 0x3FC */ s32 value1;
    /* 0x400 */ s32 value2;
};

extern "C" GameStateView g_gameState;

extern "C" s32 FUN_0037d4d4(void)
{
    g_gameState.flag = 0;
    g_gameState.value0 = 0;
    g_gameState.value1 = 0;
    g_gameState.value2 = 0;
    return 1;
}
