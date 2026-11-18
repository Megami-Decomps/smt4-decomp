/* NON_MATCHING: only the four comparisons of a loaded portrait against the desired ones use reversed CMP operands (retail cmp id, desired). */
#include "camp/Unite/UniteGlobals.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
void statusBustUpPortraitRelease(s32 demonId, s32 bank);
void statusBustUpPortraitAcquire(s32 demonId, s32 bank);

// Keep the four preview portrait slots synchronized with the current fusion selection.
void FUN_00231574(void)
{
    UniteWorkA* work = g_unite;
    s32 selected = resourceRunEmbeddedOperationIfUnblocked(work->portraitSelectionA.cursor);
    if (work->menu.mode == 2) {
        selected = resourceRunEmbeddedOperationIfUnblocked(work->portraitSelectionA.alternateCursor);
    }
    for (s32 slot = 0; slot < 4; ++slot) {
        u16 id = static_cast<u16>(work->portraitSelectionA.loaded[slot]);
        if (id != 0 && id != work->portraitSelectionA.desired[selected] &&
            id != work->portraitSelectionA.desired[selected + 1] &&
            id != work->portraitSelectionA.desired[selected + 2] &&
            id != work->portraitSelectionA.desired[selected + 3]) {
            if (devilIsTextureLoaded(work->portraitSelectionA.loaded[slot], 1)) {
                statusBustUpPortraitRelease(work->portraitSelectionA.loaded[slot], 1);
                work->portraitSelectionA.loaded[slot] = 0;
            }
        }
    }
    for (s32 index = 0; index < 4; ++index) {
        if (work->portraitSelectionA.desired[selected + index] != 0 &&
            work->portraitSelectionA.desired[selected + index] != static_cast<u16>(work->portraitSelectionA.loaded[0]) &&
            work->portraitSelectionA.desired[selected + index] != static_cast<u16>(work->portraitSelectionA.loaded[1]) &&
            work->portraitSelectionA.desired[selected + index] != static_cast<u16>(work->portraitSelectionA.loaded[2]) &&
            work->portraitSelectionA.desired[selected + index] != static_cast<u16>(work->portraitSelectionA.loaded[3])) {
            for (s32 slot = 0; slot < 4; ++slot) {
                if (work->portraitSelectionA.loaded[slot] == 0) {
                    statusBustUpPortraitAcquire(static_cast<s16>(work->portraitSelectionA.desired[selected + index]), 1);
                    work->portraitSelectionA.loaded[slot] = work->portraitSelectionA.desired[selected + index];
                    break;
                }
            }
        }
    }
}
}
