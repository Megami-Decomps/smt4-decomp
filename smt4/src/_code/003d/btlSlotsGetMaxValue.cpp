#include "common.h"

extern "C" {

#define BTL_SLOT_COUNT 0x85

typedef struct BtlSlotEntry {
    /* 0x000 */ u32 flags;      /* bit 0: in the battle */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ s16 unit;
    /* 0x00A */ u8 unk00a[0x27E];
} BtlSlotEntry; /* 0x288 bytes */

typedef struct BtlSlotState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlSlotEntry *entries;
} BtlSlotState;

typedef struct BtlSlot {
    /* 0 */ s32 entry;          /* index into the entries, negative when empty */
    /* 4 */ s32 value;
} BtlSlot;

typedef struct BtlUnitTable {
    /* 0x000 */ u8 unk000[0x5A8];
    /* 0x5A8 */ BtlSlot slots[BTL_SLOT_COUNT];
} BtlUnitTable;

extern BtlUnitTable *btlUnitGet(void);
extern s32 FUN_00229914(BtlSlotState **state, BtlUnitTable *table, s32 unit);

/* Largest slot value among the used slots whose entry is in the battle and passes FUN_00229914. */
s32 btlSlotsGetMaxValue(BtlSlotState **state)
{
    BtlUnitTable *table = btlUnitGet();
    s32 best = 0;
    s32 i;

    for (i = 0; i < BTL_SLOT_COUNT; i++) {
        if (table->slots[i].entry >= 0 || table->slots[i].value != 0) {
            BtlSlotEntry *entry = &(*state)->entries[table->slots[i].entry];

            if ((entry->flags & 1) != 0 && FUN_00229914(state, table, entry->unit) == 0 && best < table->slots[i].value) {
                best = table->slots[i].value;
            }
        }
    }
    return best;
}

}
