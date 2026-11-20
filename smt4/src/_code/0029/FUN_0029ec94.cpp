/* NON_MATCHING: the four membership comparisons of the first (loaded-slot) loop use reversed operands; every other instruction matches. */
#include "camp/Unite/UniteGlobals.h"
#include "code/Code0029_Smt4.h"

extern "C" {
s32 FUN_00293f10(s32 id, s32 byDevilId);
void statusBustUpPortraitRelease(s32 id, s32 byDevilId);
void statusBustUpPortraitAcquire(s32 id, s32 byDevilId);

void FUN_0029ec94(void)
{
    UniteWork *work = g_unite;
    s32 first = resourceRunEmbeddedOperationIfUnblocked(work->portraitSelectionIV.cursor);
    if (work->menu.mode == 1)
        first = resourceRunEmbeddedOperationIfUnblocked(work->portraitSelectionIV.alternateCursor);

    for (s32 slot = 0; slot < 4; ++slot) {
        u32 id = (u16)work->portraitSelectionIV.loaded[slot];
        if (id && work->portraitSelectionIV.desired[first] != id &&
            work->portraitSelectionIV.desired[first + 1] != id &&
            work->portraitSelectionIV.desired[first + 2] != id &&
            work->portraitSelectionIV.desired[first + 3] != id) {
            if (FUN_00293f10(work->portraitSelectionIV.loaded[slot], 1)) {
                statusBustUpPortraitRelease(work->portraitSelectionIV.loaded[slot], 1);
                work->portraitSelectionIV.loaded[slot] = 0;
            }
        }
    }
    for (s32 entry = 0; entry < 4; ++entry) {
        if (work->portraitSelectionIV.desired[first + entry] &&
            work->portraitSelectionIV.desired[first + entry] != (u16)work->portraitSelectionIV.loaded[0] &&
            work->portraitSelectionIV.desired[first + entry] != (u16)work->portraitSelectionIV.loaded[1] &&
            work->portraitSelectionIV.desired[first + entry] != (u16)work->portraitSelectionIV.loaded[2] &&
            work->portraitSelectionIV.desired[first + entry] != (u16)work->portraitSelectionIV.loaded[3]) {
            for (s32 slot = 0; slot < 4; ++slot) {
                if (!work->portraitSelectionIV.loaded[slot]) {
                    statusBustUpPortraitAcquire((s16)work->portraitSelectionIV.desired[first + entry], 1);
                    work->portraitSelectionIV.loaded[slot] = work->portraitSelectionIV.desired[first + entry];
                    break;
                }
            }
        }
    }
}
}
