/* NON_MATCHING: Selection-identifier loads and saved-register allocation differ. */
#include "common.h"
#include "gamedata/Table00.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern CountdownContextPrefixIV g_countdown;
const Table00Record *dataTable00FindById(u32 id);
s32 FUN_002942c4(s32 index, s32 mode);
}

extern "C" void FUN_003acf1c(u32 requestedId)
{
    SelectionStatePrefixIV *state = g_countdown.selection;
    if (state->currentId == requestedId)
        return;

    if (state->currentId == 0) {
        state->initialId = requestedId;
        state->initialIndex = -1;
        const Table00Record *record = dataTable00FindById(0);
        for (s32 i = 0; i < 1201; ++i, ++record) {
            if (record->selection.selectionId == requestedId) {
                state->initialIndex = (s16)record->id;
                break;
            }
        }

        state->secondaryId = requestedId;
        state->secondaryIndex = -1;
        record = dataTable00FindById(0);
        for (s32 i = 0; i < 1201; ++i, ++record) {
            if (record->selection.selectionId == requestedId) {
                state->secondaryIndex = (s16)record->id;
                break;
            }
        }

        if (state->initialIndex >= 0)
            FUN_002942c4(state->initialIndex, 1);
    }

    state->currentId = requestedId;
    state->currentIndex = -1;
    const Table00Record *record = dataTable00FindById(0);
    for (s32 i = 0; i < 1201; ++i, ++record) {
        if (record->selection.selectionId == requestedId) {
            state->currentIndex = (s16)record->id;
            break;
        }
    }
}
