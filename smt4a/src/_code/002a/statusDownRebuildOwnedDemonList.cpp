/* NON_MATCHING: the cursor bound test uses the opposite row and column registers, as in the IV twin. */
#include "status/StatusDownA.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
void sysMemClear(void *memory, u32 size);
void gridNavigationConfigure(void *controller, s32 count, s32 rows, s32 columns, s32 arg4, s32 arg5);
void scrollOwnerSelectIndex(void *controller, s32 column);
void FUN_003d4104(void);

void statusDownRebuildOwnedDemonList(const u8 *quantities)
{
    StatusDownStateA *state = g_statusDown;
    state->inventory.count = 0;
    state->inventory.ownedCount = 0;
    sysMemClear(state->inventory.entries, sizeof(state->inventory.entries));
    for (u16 id = 0; id < 0x500; ++id) {
        const NkmBaseRecordA *record = nkmBaseGetRecord(id);
        if (record != NULL && (record->flags & 1) != 0 && quantities[record->id] != 0) {
            state->inventory.entries[state->inventory.count][0] = record->id;
            u8 quantity = quantities[record->id];
            state->inventory.entries[state->inventory.count][1] = quantity;
            s16 count = state->inventory.count;
            if (quantity != 0) {
                ++state->inventory.ownedCount;
            }
            state->inventory.count = count + 1;
        }
    }
    gridNavigationConfigure(&state->inventory.navigation, state->inventory.count, 9, 4, 1, 1);
    ScrollSelection *controller = (ScrollSelection *)&state->inventory.navigation;
    s32 count = state->inventory.count;
    if (count > 0 && count <= state->inventory.column + state->inventory.row * 4) {
        state->inventory.row = (count - 1) / 4;
        state->inventory.column = state->inventory.count - state->inventory.row * 4 - 1;
        scrollListSetSelectionTracked(controller, state->inventory.row);
        scrollOwnerSelectIndex(controller, state->inventory.column);
    } else {
        scrollListSetSelectionTracked(controller, state->inventory.row);
        scrollOwnerSelectIndex(controller, state->inventory.column);
    }
    FUN_003d4104();
    state->listActive = 1;
}
} /* extern "C" */
