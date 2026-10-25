/* NON_MATCHING: eight equality comparisons use reversed CMP operands; control flow and instruction count match. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "util/CalleeContracts.h"

extern "C" {
extern UniteWork* g_unite;
s32 resourceRunEmbeddedOperationIfUnblocked(void* cursor);
void FUN_0038b3f8(s32 demonId, s32 bank);
void FUN_00371c3c(s32 demonId, s32 bank);

// Keep the four preview portrait slots synchronized with the current fusion selection.
void FUN_00231574(void)
{
    UniteWork* work = g_unite;
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
                FUN_0038b3f8(work->portraitSelectionA.loaded[slot], 1);
                work->portraitSelectionA.loaded[slot] = 0;
            }
        }
    }
    for (s32 index = 0; index < 4; ++index) {
        u16 id = work->portraitSelectionA.desired[selected + index];
        if (id != 0 && id != static_cast<u16>(work->portraitSelectionA.loaded[0]) &&
            id != static_cast<u16>(work->portraitSelectionA.loaded[1]) &&
            id != static_cast<u16>(work->portraitSelectionA.loaded[2]) &&
            id != static_cast<u16>(work->portraitSelectionA.loaded[3])) {
            for (s32 slot = 0; slot < 4; ++slot) {
                if (work->portraitSelectionA.loaded[slot] == 0) {
                    FUN_00371c3c(static_cast<s16>(work->portraitSelectionA.desired[selected + index]), 1);
                    work->portraitSelectionA.loaded[slot] = work->portraitSelectionA.desired[selected + index];
                    break;
                }
            }
        }
    }
}
}
