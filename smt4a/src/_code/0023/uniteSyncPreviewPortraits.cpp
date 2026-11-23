#include "camp/Unite/UniteGlobals.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "code/Code002a_Smt4a.h"

extern "C" {
void statusBustUpPortraitRelease(s32 demonId, s32 bank);
void statusBustUpPortraitAcquire(s32 demonId, s32 bank);

/* Keeps the four preview portrait slots in step with the current fusion selection: releases loaded
 * portraits the selection no longer shows, then loads the shown ones into free slots. */
void uniteSyncPreviewPortraits(void)
{
    UniteWorkA *work = g_unite;
    s32 selected = resourceRunEmbeddedOperationIfUnblocked((Object *)work->portraitSelectionA.cursor);
    if (work->menu.mode == 2) {
        selected = resourceRunEmbeddedOperationIfUnblocked((Object *)work->portraitSelectionA.alternateCursor);
    }
    for (s32 slot = 0; slot < 4; ++slot) {
        if (work->portraitSelectionA.loaded[slot] != 0 &&
            work->portraitSelectionA.loaded[slot] != work->portraitSelectionA.desired[selected] &&
            work->portraitSelectionA.loaded[slot] != work->portraitSelectionA.desired[selected + 1] &&
            work->portraitSelectionA.loaded[slot] != work->portraitSelectionA.desired[selected + 2] &&
            work->portraitSelectionA.loaded[slot] != work->portraitSelectionA.desired[selected + 3]) {
            if (devilIsTextureLoaded((s16)work->portraitSelectionA.loaded[slot], 1)) {
                statusBustUpPortraitRelease((s16)work->portraitSelectionA.loaded[slot], 1);
                work->portraitSelectionA.loaded[slot] = 0;
            }
        }
    }
    for (s32 index = 0; index < 4; ++index) {
        if (work->portraitSelectionA.desired[selected + index] != 0 &&
            work->portraitSelectionA.desired[selected + index] != work->portraitSelectionA.loaded[0] &&
            work->portraitSelectionA.desired[selected + index] != work->portraitSelectionA.loaded[1] &&
            work->portraitSelectionA.desired[selected + index] != work->portraitSelectionA.loaded[2] &&
            work->portraitSelectionA.desired[selected + index] != work->portraitSelectionA.loaded[3]) {
            for (s32 slot = 0; slot < 4; ++slot) {
                if (work->portraitSelectionA.loaded[slot] == 0) {
                    statusBustUpPortraitAcquire((s16)work->portraitSelectionA.desired[selected + index], 1);
                    work->portraitSelectionA.loaded[slot] = work->portraitSelectionA.desired[selected + index];
                    break;
                }
            }
        }
    }
}
} /* extern "C" */
