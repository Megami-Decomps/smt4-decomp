/* NON_MATCHING: eight membership equality comparisons use reversed operands; every other instruction matches. */
#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {
extern UniteWork *g_unite;
s32 FUN_0029e93c(const u8 *cursor);
s32 FUN_00293f10(s32 id, s32 byDevilId);
void FUN_002958f8(s32 id, s32 byDevilId);
void FUN_002942c4(s32 id, s32 byDevilId);

void FUN_0029ec94(void)
{
    UniteWork *work = g_unite;
    s32 first = FUN_0029e93c(work->portraitSelectionIV.cursor);
    if (work->menu.mode == 1)
        first = FUN_0029e93c(work->portraitSelectionIV.alternateCursor);

    for (s32 slot = 0; slot < 4; ++slot) {
        u32 id = (u16)work->portraitSelectionIV.loaded[slot];
        if (id && work->portraitSelectionIV.desired[first] != id &&
            work->portraitSelectionIV.desired[first + 1] != id &&
            work->portraitSelectionIV.desired[first + 2] != id &&
            work->portraitSelectionIV.desired[first + 3] != id) {
            if (FUN_00293f10(work->portraitSelectionIV.loaded[slot], 1)) {
                FUN_002958f8(work->portraitSelectionIV.loaded[slot], 1);
                work->portraitSelectionIV.loaded[slot] = 0;
            }
        }
    }
    for (s32 entry = 0; entry < 4; ++entry) {
        u32 id = work->portraitSelectionIV.desired[first + entry];
        if (id && (u16)work->portraitSelectionIV.loaded[0] != id &&
            (u16)work->portraitSelectionIV.loaded[1] != id &&
            (u16)work->portraitSelectionIV.loaded[2] != id &&
            (u16)work->portraitSelectionIV.loaded[3] != id) {
            for (s32 slot = 0; slot < 4; ++slot) {
                if (!work->portraitSelectionIV.loaded[slot]) {
                    FUN_002942c4((s16)work->portraitSelectionIV.desired[first + entry], 1);
                    work->portraitSelectionIV.loaded[slot] = work->portraitSelectionIV.desired[first + entry];
                    break;
                }
            }
        }
    }
}
}
