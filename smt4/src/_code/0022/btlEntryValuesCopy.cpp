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


/* Copies the two values of each of the 109 listed battle entries into the table (zero for a missing entry). */
void btlEntryValuesCopy(BtlMainState **stateRef, CopyTable *table)
{
    s32 i = 0;

    do {
        BtlEntry *entry;

        table->entries[i].valueA = 0;
        entry = btlMainFindEntryByListedId(*stateRef, i);
        if (entry != NULL) {
            table->entries[i].valueA = entry->data.hp;
            table->entries[i].valueB = entry->data.maxHp;
        }
        i++;
    } while (i < 109);
}

} /* extern "C" */
