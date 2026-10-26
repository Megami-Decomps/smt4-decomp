/* NON_MATCHING: unk1381 is an s8 (retail splits its offset as +4864/[129]); the constant-return tails (mov r0,#3 shared by three branches) are laid out differently. */
#include "shard/Shard0033.h"

extern "C" {
extern ObjBRef g_gameGlobals;

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
    if (mode != 7) {
        if (mode == 9 || mode == 10) return 2;
        if (mode == 11 || mode == 12 || mode == 8) return 2;
        if (mode == 15) return 1;
        if (mode == 14) {
            return g_gameGlobals.instance->unk1381 == 0 ? 3 : 2;
        }
        if (g_gameGlobals.instance->unk1381 != 0) return 2;
    }
    return g_gameGlobals.instance->sessionDisplay.active != 0 ? 3 : 2;
}
}
