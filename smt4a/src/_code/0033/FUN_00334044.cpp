/* NON_MATCHING: the tests and their order match; the constant-return blocks are laid out differently (retail puts
   `return 1` first, then 2, then mode 0's test and `return 3`). */
#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

// Classify the current session's interaction and display state.
u32 FUN_00334044()
{
    u8 mode = g_gameGlobals.instance->unk2018;
    if (mode == 3 || mode == 5 || mode == 6 || mode == 7
        || mode == 9 || mode == 10 || mode == 12) {
        return 1;
    }
    if (mode == 13) return 2;
    mode = g_gameGlobals.instance->unk2017;
    if (mode == 0) {
        return g_gameGlobals.instance->unk1381 == 0 ? 3 : 2;
    }
    if (mode == 4) return 2;
    if (mode == 7) {
        if (g_gameGlobals.instance->sessionDisplay.active != 0) return 3;
        return 2;
    }
    if (mode == 9 || mode == 10) return 2;
    if (mode == 11 || mode == 12 || mode == 8) return 2;
    if (mode == 15) return 1;
    if (mode == 14) {
        if (g_gameGlobals.instance->unk1381 == 0) return 3;
        return 2;
    }
    if (g_gameGlobals.instance->unk1381 == 0) {
        if (g_gameGlobals.instance->sessionDisplay.active != 0) return 3;
    }
    return 2;
}
}
