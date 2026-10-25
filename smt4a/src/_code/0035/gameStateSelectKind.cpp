#include "common.h"

struct GameStateKindWorkA {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u16 defaultKind;
    /* 0x32 */ s8 selectedKind;
    /* 0x33 */ s8 overrides[5];
};

extern "C" GameStateKindWorkA g_gameState;

// Select the last installed kind override, or fall back to the default.
extern "C" void gameStateSelectKind(void)
{
    GameStateKindWorkA *state = &g_gameState;
    s32 kind;
    if ((kind = state->overrides[4]) != -1 ||
        (kind = state->overrides[3]) != -1 ||
        (kind = state->overrides[2]) != -1 ||
        (kind = state->overrides[1]) != -1 ||
        (kind = state->overrides[0]) != -1) {
        state->selectedKind = (s8)kind;
    } else {
        state->selectedKind = (s8)state->defaultKind;
    }
}
