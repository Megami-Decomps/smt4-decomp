/* NON_MATCHING: HP <= 0 predicate recovered; scaled unit-array address folds into writeback rather than separate flags/HP offsets. */
#include "common.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0xC4];
    /* 0x0C8 */ s32 hp;
    /* 0x0CC */ u8 unk0CC[0x1BC];
} BattleUnit;

typedef struct BattleEntry {
    /* 0x00 */ u8 unk00[0x6E];
    /* 0x6E */ s16 unitIndex;
} BattleEntry;

typedef struct BattleState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BattleUnit *units;
} BattleState;

typedef struct EntryCopy {
    /* 0x0 */ u16 valueA;
    /* 0x2 */ u16 valueB;
    /* 0x4 */ u8 unk4[6];
} EntryCopy;

typedef struct CopyTable {
    /* 0x000 */ u8 unk000[0x9D4];
    /* 0x9D4 */ EntryCopy entries[109];
} CopyTable;

BattleEntry *btlMainFindEntryByListedId(BattleState *state, s32 id);

/* Returns 1 when the unit (via its listed entry, else `index` itself) has no copied value, is flagged live (bit 0), not flagged 0x400000 and has no HP. */
u32 FUN_00229914(BattleState **stateRef, CopyTable *table, s32 index)
{
    BattleEntry *entry = btlMainFindEntryByListedId(*stateRef, index);

    if (entry != NULL) {
        index = entry->unitIndex;
    }
    if (table->entries[index].valueA == 0) {
        BattleUnit *units = (*stateRef)->units;

        if ((units[index].flags & 1) != 0 && (units[index].flags & 0x400000) == 0 && units[index].hp <= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
