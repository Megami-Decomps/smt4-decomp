#include "common.h"
#include "game/GameStateA.h"

// Select the last installed kind override, or fall back to the default.
extern "C" void gameStateSelectKind(void)
{
    GameStateA *state = &g_gameState;
    s32 kind;
    if ((kind = state->overrideKinds[4]) != -1 ||
        (kind = state->overrideKinds[3]) != -1 ||
        (kind = state->overrideKinds[2]) != -1 ||
        (kind = state->overrideKinds[1]) != -1 ||
        (kind = state->overrideKinds[0]) != -1) {
        state->selectedKind = (s8)kind;
    } else {
        state->selectedKind = (s8)state->defaultKind;
    }
}
