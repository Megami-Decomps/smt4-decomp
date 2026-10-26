#include "common.h"

struct ResetState {
    u32 unk00;       // 0x00
    u32 state;       // 0x04
    u32 counter;     // 0x08
};

// The fields of g_gameState this reset clears.
struct GameStateResetView {
    /* 0x000 */ u8 unk000[0x1C8];
    /* 0x1C8 */ u16 counter;
    /* 0x1CA */ u8 unk1CA[3];
    /* 0x1CD */ u8 flag;
};

extern "C" {
extern ResetState* g_mapEnemy;
extern GameStateResetView g_gameState;

void FUN_00272f54(void)
{
    ResetState* state = g_mapEnemy;
    state->state = 4;
    state->counter = 0;
    g_gameState.counter = 0;
    g_gameState.flag = 0;
}
}
