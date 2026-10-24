/* NON_MATCHING: retail reads the two game-state words through two pointer copies (add r0, r1, #0; separate ldr) instead of one ldrd/base */
#include "common.h"

struct GameModeState {
    s32 mode;     // 0x00
    s32 submode;  // 0x04
};

struct LmapView {
    u8 unk000[0x220];  // 0x000
    u8 busyA;          // 0x220
    u8 unk221[0x97];   // 0x221
    u8 busyB;          // 0x2B8
};

extern "C" {

extern GameModeState g_gameState;
extern LmapView *g_lmapView;

void FUN_003a2904(s32 a, s32 b);

/* Callback: in mode 2 / submode 5 or mode 4 / submode 2, starts the map view action when the view is idle. Always returns 0. */
s32 FUN_002bd170(void)
{
    GameModeState *state = &g_gameState;
    if (state->mode == 2) {
        if (state->submode != 5) {
            return 0;
        }
    } else if (state->mode == 4) {
        if (state->submode != 2) {
            return 0;
        }
    } else {
        return 0;
    }
    if (g_lmapView != NULL && g_lmapView->busyA == 0 && g_lmapView->busyB == 0) {
        FUN_003a2904(0, 0);
    }
    return 0;
}

} /* extern "C" */
