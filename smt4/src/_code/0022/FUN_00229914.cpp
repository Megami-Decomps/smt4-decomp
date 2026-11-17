/* NON_MATCHING: HP <= 0 predicate recovered; scaled unit-array address folds into writeback rather than separate flags/HP offsets. */
#include "common.h"
#include "battle/BtlEntryLookup.h"

extern "C" {

typedef struct EntryCopy {
    /* 0x0 */ u16 valueA;
    /* 0x2 */ u16 valueB;
    /* 0x4 */ u8 unk4[6];
} EntryCopy;

typedef struct CopyTable {
    /* 0x000 */ u8 unk000[0x9D4];
    /* 0x9D4 */ EntryCopy entries[109];
} CopyTable;


/* Returns 1 when the unit (via its listed entry, else `index` itself) has no copied value, is flagged live (bit 0), not flagged 0x400000 and has no HP. */
u32 FUN_00229914(BtlMainState **stateRef, CopyTable *table, s32 index)
{
    BtlEntry *entry = btlMainFindEntryByListedId(*stateRef, index);

    if (entry != NULL) {
        index = entry->selectionIndex;
    }
    if (table->entries[index].valueA == 0) {
        BtlEntry *entries = (*stateRef)->entries;

        if ((entries[index].flags & 1) != 0 && (entries[index].flags & 0x400000) == 0 && entries[index].unk0C8 <= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
