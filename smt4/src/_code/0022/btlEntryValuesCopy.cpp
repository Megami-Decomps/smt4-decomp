#include "common.h"

extern "C" {

typedef struct BattleEntry {
    /* 0x000 */ u8 unk000[0x1B4];
    /* 0x1B4 */ u16 valueA;
    /* 0x1B6 */ u16 valueB;
} BattleEntry;

typedef struct EntryCopy {
    /* 0x0 */ u16 valueA;
    /* 0x2 */ u16 valueB;
    /* 0x4 */ u8 unk4[6];
} EntryCopy;

typedef struct CopyTable {
    /* 0x000 */ u8 unk000[0x9D4];
    /* 0x9D4 */ EntryCopy entries[109];
} CopyTable;

BattleEntry *btlMainFindEntryByListedId(void *state, s32 id);

/* Copies the two values of each of the 109 listed battle entries into the table (zero for a missing entry). */
void btlEntryValuesCopy(void **stateRef, CopyTable *table)
{
    s32 i = 0;

    do {
        BattleEntry *entry;

        table->entries[i].valueA = 0;
        entry = btlMainFindEntryByListedId(*stateRef, i);
        if (entry != NULL) {
            table->entries[i].valueA = entry->valueA;
            table->entries[i].valueB = entry->valueB;
        }
        i++;
    } while (i < 109);
}

} /* extern "C" */
