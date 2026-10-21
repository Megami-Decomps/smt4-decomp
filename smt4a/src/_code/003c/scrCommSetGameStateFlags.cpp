/* NON_MATCHING: retail uses `push {r4, r5, r6, lr}` where armcc emits `push {r4, lr}`. */
#include "common.h"

extern "C" {

struct State { u8 unk000[0x14c]; u8 first; u8 second; };
extern State g_gameState;
s32 scrGetArg(u32 index);

s32 scrCommSetGameStateFlags(void)
{
    g_gameState.first = scrGetArg(0) != 0;
    g_gameState.second = scrGetArg(1) != 0;
    return 1;
}

} /* extern "C" */
