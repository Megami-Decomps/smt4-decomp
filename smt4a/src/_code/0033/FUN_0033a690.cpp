/* NON_MATCHING: retail hoists the shared float coordinates into registers s16-s26 before the mode tests and reuses them across the layouts (so the (25, 1) layout shares the (25, 2) code); this build reloads each constant per block. The stores themselves are identical. */
#include "map/mapDepart.h"

namespace {
/* One row of the screen's anchor table: three coordinates and the row's other state. */
struct AnchorRow {
    /* 0x00 */ f32 x[3];
    /* 0x0c */ u8 unk0c[0x34];
};

/* The screen work area (the part this layout code sets). */
struct AnchorWork {
    /* 0x000 */ u8 unk000[0xd4];
    /* 0x0d4 */ AnchorRow anchors[5];
    /* 0x214 */ u8 unk214[0x305 - 0x214];
    /* 0x305 */ u8 dirty;
};

/* The global that holds the work area pointer at +4. */
struct AnchorGlobals {
    u32 unk00;
    AnchorWork *work;
};
}

extern "C" {
extern AnchorGlobals DAT_005806a0;
extern GameStateA g_gameState;
void FUN_00352a14(void);
s32 gameFlagIsSet(u32 flag);

/* Lays out the screen's anchor rows for the current map mode (g_gameState.mode/submode); (10, 8) as arguments
   selects the fixed first layout. */
void FUN_0033a690(s32 mode, s32 subMode)
{
    AnchorWork *work = DAT_005806a0.work;
    work->dirty = 0;
    FUN_00352a14();
    if (mode == 10 && subMode == 8) {
        work = DAT_005806a0.work;
        work->anchors[0].x[1] = 100.0f;
        work->anchors[1].x[1] = 200.0f;
        work->anchors[2].x[1] = 0.0f;
        work->anchors[3].x[1] = 380.0f;
        work->anchors[4].x[1] = 42.0f;
    }
    if (g_gameState.mode == 1) {
        if (g_gameState.submode != 1) {
            return;
        }
        if (gameFlagIsSet(114) && !gameFlagIsSet(177)) {
            work = DAT_005806a0.work;
            work->anchors[1].x[0] = 110.0f;
            work->anchors[2].x[0] = 0.0f;
            work->anchors[3].x[0] = 480.0f;
            work->anchors[4].x[0] = 47.0f;
            work->anchors[1].x[1] = 220.0f;
            work->anchors[2].x[1] = 0.0f;
            work->anchors[3].x[1] = 480.0f;
            work->anchors[4].x[1] = 47.0f;
            work->anchors[0].x[2] = 170.0f;
            work->anchors[1].x[2] = 130.0f;
            work->anchors[2].x[2] = 40.0f;
            work->anchors[3].x[2] = 250.0f;
            work->anchors[4].x[2] = 47.0f;
            work->anchors[0].x[0] = 190.0f;
            work->anchors[0].x[1] = 180.0f;
        }
    }
    if (g_gameState.mode == 4) {
        if (g_gameState.submode != 2) {
            return;
        }
        if (gameFlagIsSet(244) && !gameFlagIsSet(246)) {
            work = DAT_005806a0.work;
            work->anchors[1].x[0] = 100.0f;
            work->anchors[2].x[0] = 0.0f;
            work->anchors[3].x[0] = 480.0f;
            work->anchors[4].x[0] = 47.0f;
            work->anchors[1].x[1] = 220.0f;
            work->anchors[2].x[1] = 0.0f;
            work->anchors[3].x[1] = 480.0f;
            work->anchors[4].x[1] = 47.0f;
            work->anchors[0].x[2] = 170.0f;
            work->anchors[1].x[2] = 130.0f;
            work->anchors[2].x[2] = 40.0f;
            work->anchors[3].x[2] = 250.0f;
            work->anchors[4].x[2] = 47.0f;
            work->anchors[0].x[0] = 190.0f;
            work->anchors[0].x[1] = 180.0f;
        }
    }
    if (g_gameState.mode == 25) {
        if (g_gameState.submode == 1 || g_gameState.submode == 2) {
            work = DAT_005806a0.work;
            work->anchors[0].x[0] = 170.0f;
            work->anchors[1].x[0] = 210.0f;
            work->anchors[2].x[0] = 0.0f;
            work->anchors[3].x[0] = 280.0f;
            work->anchors[4].x[0] = 75.0f;
            work->anchors[0].x[1] = 100.0f;
            work->anchors[1].x[1] = 220.0f;
            work->anchors[2].x[1] = 0.0f;
            work->anchors[3].x[1] = 280.0f;
            work->anchors[4].x[1] = 75.0f;
            work->anchors[0].x[2] = 150.0f;
            work->anchors[1].x[2] = 160.0f;
            work->anchors[2].x[2] = 40.0f;
            work->anchors[3].x[2] = 100.0f;
            work->anchors[4].x[2] = 75.0f;
        } else {
            return;
        }
    }
    s32 current = g_gameState.mode;
    if (current == 28 || current == 29 || current == 30 || current == 31 || current == 32) {
        work = DAT_005806a0.work;
        work->anchors[0].x[0] = 170.0f;
        work->anchors[1].x[0] = 250.0f;
        work->anchors[2].x[0] = 0.0f;
        work->anchors[3].x[0] = 490.0f;
        work->anchors[4].x[0] = 43.0f;
    }
}

} /* extern "C" */
