#include "battle/BattleUnitSlot.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {

#define BTL_SLOT_COUNT 0x85


typedef struct BtlSlot {
    /* 0 */ s32 entry;          /* index into the entries, negative when empty */
    /* 4 */ s32 value;
} BtlSlot;

typedef struct BtlUnitTable {
    /* 0x000 */ u8 unk000[0x5A8];
    /* 0x5A8 */ BtlSlot slots[BTL_SLOT_COUNT];
} BtlUnitTable;

extern s32 FUN_00229914(BtlMainState **state, BtlUnitTable *table, s32 unit);

/* Largest slot value among the used slots whose entry is in the battle and passes FUN_00229914. */
s32 btlSlotsGetMaxValue(BtlMainState **state)
{
    BtlUnitTable *table = reinterpret_cast<BtlUnitTable *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(state)));
    s32 best = 0;
    s32 i;

    for (i = 0; i < BTL_SLOT_COUNT; i++) {
        if (table->slots[i].entry >= 0 || table->slots[i].value != 0) {
            BtlEntry *entry = &(*state)->entries[table->slots[i].entry];

            if ((entry->flags & 1) != 0 && FUN_00229914(state, table, entry->members.ids[0]) == 0 && best < table->slots[i].value) {
                best = table->slots[i].value;
            }
        }
    }
    return best;
}

}
