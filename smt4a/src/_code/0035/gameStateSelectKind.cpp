/* NON_MATCHING: global-base and selected-kind registers are swapped (retail r0/r1, compiled r1/r0). */
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
    s32 kind;
    if ((kind = g_gameState.overrides[4]) != -1 ||
        (kind = g_gameState.overrides[3]) != -1 ||
        (kind = g_gameState.overrides[2]) != -1 ||
        (kind = g_gameState.overrides[1]) != -1 ||
        (kind = g_gameState.overrides[0]) != -1) {
        g_gameState.selectedKind = (s8)kind;
    } else {
        g_gameState.selectedKind = (s8)g_gameState.defaultKind;
    }
}
