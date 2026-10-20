#include "common.h"

extern "C" {

typedef struct LimitEntry {
    /* 0x00 */ u8 groupId;
    /* 0x01 */ u8 itemId;
    /* 0x02 */ u8 unk02[8];
    /* 0x0A */ u16 limit;      /* 0 = no limit */
    /* 0x0C */ u8 unk0C[0x98];
} LimitEntry; /* 0xA4 bytes */

typedef struct ItemState {
    /* 0x0 */ u16 value;
    /* 0x2 */ u8 count;
    /* 0x3 */ u8 flags;        /* low 5 bits kept when the count resets */
} ItemState;

typedef struct ItemDef {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u16 baseValue;
} ItemDef;

extern u32 dataTableGet(u32 table, u32 index);
extern LimitEntry *dataTableGetEntries(void);
extern s32 dataTableGetCount(u32 index);
extern ItemState *gameDataGetTableEntry(u8 groupId, u8 itemId);
extern ItemDef *FUN_0015fa74(u8 groupId, u8 itemId);
extern void FUN_00148d68(u8 groupId, u8 itemId, s32 arg);

/* Resets every item whose limit is set and not above `level` and whose value has drifted from its base. */
void itemResetOverLimitStates(u32 level)
{
    u32 table = dataTableGet(2, 0);
    LimitEntry *entries = dataTableGetEntries();
    s32 count = dataTableGetCount(table);
    s32 i;

    for (i = 0; i < count; i++) {
        LimitEntry *entry = &entries[i];

        if (entry->limit != 0 && entry->limit <= level) {
            u8 itemId = entry->itemId;
            u8 groupId = entries[i].groupId;
            ItemState *state = gameDataGetTableEntry(groupId, itemId);

            u16 baseValue = FUN_0015fa74(groupId, itemId)->baseValue;

            if (state->value != baseValue) {
                state->count = 0;
                state->flags = state->flags & ~0x1F;
                FUN_00148d68(groupId, itemId, 0);
            }
        }
    }
}

} /* extern "C" */
