#include "shard/W5_W5Match7_SceneState.h"

// Pick the highest-priority kind override, falling back to the default kind.
extern "C" void gameStateSelectKind(void)
{
    GameStateA *state = &g_gameState;
    s32 kind;
    if ((kind = state->overrideKind) != -1 ||
        (kind = state->eventKind) != -1 ||
        (kind = state->overrideKinds[2]) != -1 ||
        (kind = state->overrideKinds[1]) != -1 ||
        (kind = state->overrideKinds[0]) != -1) {
        state->selectedKind = (s8)kind;
    } else {
        state->selectedKind = (s8)state->defaultKind;
    }
}
