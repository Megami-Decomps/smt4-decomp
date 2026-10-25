#include "common.h"
#include "gamedata/Table00.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern CountdownContextPrefixIV g_countdown;
const Table00Record *dataTable00FindById(u32 id);
s32 FUN_002942c4(s32 index, s32 mode);
}

static inline void lookupSelectionIndex(s16 *index, u32 selectionId)
{
    *index = -1;
    const Table00Record *record = dataTable00FindById(0);
    for (s32 i = 0; i < 1201; ++i, ++record) {
        if (record->selection.selectionId == selectionId) {
            *index = (s16)record->id;
            break;
        }
    }
}

extern "C" void selectionSetUnitByRecordId(u32 requestedId)
{
    SelectionStatePrefixIV *state = g_countdown.selection;
    if (state->currentId == requestedId)
        return;

    if (state->currentId == 0) {
        state->initialId = requestedId;
        lookupSelectionIndex(&state->initialIndex, requestedId);

        state->secondaryId = requestedId;
        lookupSelectionIndex(&state->secondaryIndex, requestedId);

        if (state->initialIndex >= 0)
            FUN_002942c4(state->initialIndex, 1);
    }

    state->currentId = requestedId;
    lookupSelectionIndex(&state->currentIndex, requestedId);
}
