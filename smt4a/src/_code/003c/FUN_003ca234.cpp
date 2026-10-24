#include "common.h"

struct GameStateView {
    /* 0x000 */ u8 unk000[0x451];
    /* 0x451 */ u8 value;
};

extern "C" GameStateView g_gameState;

extern "C" void FUN_003ca234(u8 value)
{
    g_gameState.value = value;
}
