#include "common.h"
#include "game/GameStateA.h"

struct ResetState {
    u32 unk00;       // 0x00
    u32 state;       // 0x04
    u32 counter;     // 0x08
};

extern "C" {
extern ResetState* g_mapEnemy;

void FUN_00272f54(void)
{
    ResetState* state = g_mapEnemy;
    state->state = 4;
    state->counter = 0;
    g_gameState.unk1C8 = 0;
    g_gameState.unk1CD = 0;
}
}
