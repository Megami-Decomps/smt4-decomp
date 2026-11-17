#include "common.h"
#include "gamedata/EncountData.h"
#include "gamedata/GameDataEntries.h"

extern "C" {

typedef struct ItemState {
    /* 0x0 */ u16 value;
    /* 0x2 */ u8 count;
    /* 0x3 */ u8 flags;        /* low 5 bits kept when the count resets */
} ItemState;

extern void weightedTableRollNextValue(u8 groupId, u8 itemId, s32 arg);

/* Resets every item whose limit is set and not above `level` and whose value has drifted from its base. */
void itemResetOverLimitStates(u32 level)
{
    void *table = dataTableGet(2, 0);
    EncountRecordA *entries = encountRecordsA(table);
    s32 count = dataTableGetCount(table);
    s32 i;

    for (i = 0; i < count; i++) {
        EncountRecordA *entry = &entries[i];

        if (entry->minimumLevel != 0 && entry->minimumLevel <= level) {
            u8 itemId = entry->area;
            u8 groupId = entries[i].map;
            ItemState *state = reinterpret_cast<ItemState *>(gameDataGetTableEntry(groupId, itemId));

            u16 baseValue = dataTable02FindConditionalMapRecord(groupId, itemId)->initialTableId;

            if (state->value != baseValue) {
                state->count = 0;
                state->flags = state->flags & ~0x1F;
                weightedTableRollNextValue(groupId, itemId, 0);
            }
        }
    }
}

} /* extern "C" */
