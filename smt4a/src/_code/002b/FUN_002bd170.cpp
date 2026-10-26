/* NON_MATCHING: getter ldr r0,[r0,#4] (game-state submode) compiled in the same multifile run (r1 live across it); getter not in image. */
#include "common.h"

struct GameModeState {
    s32 mode;     // 0x00
    s32 submode;  // 0x04
};

struct LmapBlock {
    u8 unk00[0x20];  // 0x00
    u8 busyA;        // 0x20
    u8 unk21[0x97];  // 0x21
    u8 busyB;        // 0xB8
};

struct LmapView {
    u8 unk000[0x200];  // 0x000
    LmapBlock block;   // 0x200
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
    if (g_lmapView != NULL) {
        LmapBlock *block = &g_lmapView->block;
        if (block->busyA == 0 && block->busyB == 0) {
            FUN_003a2904(0, 0);
        }
    }
    return 0;
}

} /* extern "C" */
