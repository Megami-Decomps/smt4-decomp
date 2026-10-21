/* NON_MATCHING: global-base and selected-kind registers are swapped (retail r0/r1, compiled r1/r0). */
#include "shard/W5_W5Match7_SceneState.h"

// Pick the highest-priority kind override, falling back to the default kind.
extern "C" void gameStateSelectKind(void)
{
    s32 kind;
    if ((kind = g_gameState.overrideKind) != -1 ||
        (kind = g_gameState.eventKind) != -1 ||
        (kind = g_gameState.overrideKinds[2]) != -1 ||
        (kind = g_gameState.overrideKinds[1]) != -1 ||
        (kind = g_gameState.overrideKinds[0]) != -1) {
        g_gameState.selectedKind = (s8)kind;
    } else {
        g_gameState.selectedKind = (s8)g_gameState.defaultKind;
    }
}
