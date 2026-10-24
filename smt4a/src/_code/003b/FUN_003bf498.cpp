#include "common.h"

/* The part of the game state at 0x41c that this function resets. */
struct GameStateFUN_003bf498 {
    /* 0x000 */ u8 unk000[0x41c];
    /* 0x41c */ f32 f41c;
    /* 0x420 */ f32 f420;
    /* 0x424 */ f32 f424;
    /* 0x428 */ f32 f428;
    /* 0x42c */ f32 f42c;
    /* 0x430 */ f32 f430;
    /* 0x434 */ f32 f434;
    /* 0x438 */ f32 f438;
    /* 0x43c */ f32 f43c;
    /* 0x440 */ f32 f440;
    /* 0x444 */ f32 f444;
    /* 0x448 */ f32 f448;
    /* 0x44c */ s32 value;
    /* 0x450 */ u8 flag;
};

extern "C" {

extern GameStateFUN_003bf498 g_gameState;

void FUN_00303460(s32 value);

/* Clears the twelve floats at 0x41c of the game state, its word at 0x44c and flag at 0x450, then runs FUN_00303460(0). */
void FUN_003bf498(void)
{
    g_gameState.f41c = 0.0f;
    g_gameState.f420 = 0.0f;
    g_gameState.f424 = 0.0f;
    g_gameState.f428 = 0.0f;
    g_gameState.f42c = 0.0f;
    g_gameState.f430 = 0.0f;
    g_gameState.f434 = 0.0f;
    g_gameState.f438 = 0.0f;
    g_gameState.f43c = 0.0f;
    g_gameState.f440 = 0.0f;
    g_gameState.f444 = 0.0f;
    g_gameState.f448 = 0.0f;
    g_gameState.value = 0;
    g_gameState.flag = 0;
    FUN_00303460(0);
}

} /* extern "C" */
