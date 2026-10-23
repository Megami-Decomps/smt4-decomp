/* NON_MATCHING: the state-4 switch case is placed after the reset decision and final clear stores exchange pointer/value registers. */
#include "map/lmapMain.h"
#include "map/mapDepart.h"

extern "C" {
extern LmapSceneA *g_lmapScene;
extern GameStateA g_gameState;
s32 gameFlagIsSet(u32 flag);
void lmapClearExtraFlag();
void FUN_003d2158(u32 handle, s32 enabled);

// Enable the extra map transition during selected story intervals; otherwise clear it.
void FUN_00354098()
{
    // The extra transition follows the end of the shared LmapSceneA prefix.
    struct ExtraTransitionView {
        u8 prefix[0x280];
        u32 first, second, state, handle;
    };
    ExtraTransitionView *extra;
    bool enable = false;
    switch (g_gameState.mode) {
    case 1:
        if (g_gameState.submode == 1)
            return;
        enable = gameFlagIsSet(0x72) && !gameFlagIsSet(0xB1);
        break;
    case 2:
        if (g_gameState.submode == 5)
            return;
        enable = !gameFlagIsSet(0x91);
        break;
    case 4:
        if (g_gameState.submode == 2)
            return;
        enable = gameFlagIsSet(0xF4) && !gameFlagIsSet(0xF6);
        break;
    }
    extra = reinterpret_cast<ExtraTransitionView *>(g_lmapScene);
    if (enable) {
        if (extra->state == 0)
            extra->state = 1;
        return;
    }
    if (extra->state == 0)
        return;
    if (extra->state == 3) {
        lmapClearExtraFlag();
        extra = reinterpret_cast<ExtraTransitionView *>(g_lmapScene);
        if (extra->handle != 0)
            FUN_003d2158(extra->handle, 0);
    }
    extra = reinterpret_cast<ExtraTransitionView *>(g_lmapScene);
    extra->first = 0;
    extra->state = 0;
    extra->second = 0;
    extra->handle = 0;
}
}
