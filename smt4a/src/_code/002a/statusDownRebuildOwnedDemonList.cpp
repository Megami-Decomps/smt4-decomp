/* NON_MATCHING: quantity/count increment registers, controller address scheduling and final cursor-clamp arithmetic differ from retail. */
#include "shard/W4_W4Match5_StatusDown.h"
#include "shard/W6_W6Match8_DevilRecordA.h"


extern "C" {
void sysMemClear(void *memory, u32 size);
void FUN_00203b40(void *controller, s32 count, s32 rows, s32 columns, s32 arg4, s32 arg5);
void FUN_002a4964(void *controller, s32 row);
void FUN_002a4914(void *controller, s32 column);
void FUN_003d4104(void);

void statusDownRebuildOwnedDemonList(const u8 *quantities)
{
    StatusDown *state = g_statusDown;
    state->inventory.count = 0;
    state->inventory.ownedCount = 0;
    sysMemClear(state->inventory.entryData, sizeof(state->inventory.entryData));
    for (u16 id = 0; id < 0x500; ++id) {
        const DevilRecordA *record = FUN_00184310(id);
        if (record != NULL && (record->flags & 1) != 0 && quantities[record->id] != 0) {
            state->inventory.entries[state->inventory.count][0] = record->id;
            u8 quantity = quantities[record->id];
            state->inventory.entries[state->inventory.count][1] = quantity;
            if (quantity != 0) {
                ++state->inventory.ownedCount;
            }
            ++state->inventory.count;
        }
    }
    void *controller = state->inventory.controller;
    FUN_00203b40(controller, state->inventory.count, 9, 4, 1, 1);
    s32 count = state->inventory.count;
    if (count > 0 && count <= state->inventory.column + state->inventory.row * 4) {
        s16 row = (count - 1) / 4;
        state->inventory.row = row;
        state->inventory.column = count - row * 4 - 1;
        FUN_002a4964(controller, row);
        FUN_002a4914(controller, state->inventory.column);
    } else {
        FUN_002a4964(controller, state->inventory.row);
        FUN_002a4914(controller, state->inventory.column);
    }
    FUN_003d4104();
    state->inventoryDirty = 1;
}
}
