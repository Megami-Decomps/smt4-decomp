/* NON_MATCHING: retail keeps the entry pointer in r3 and the count in ip; the build swaps them. */
#include "gamedata/DataTable.h"

extern "C" {

typedef struct PairEntry {
    /* 0x00 */ s16 key;
    /* 0x02 */ s16 value;
} PairEntry;


/* Looks up a signed key in table 6/2, falling back to the highest positive key or lowest negative key. */
s32 FUN_003cd9e8(s32 key)
{
    void *table;
    const PairEntry *entries;
    u32 count;
    s32 bestKey;
    s32 bestValue;
    u32 i;

    table = dataTableGet(6, 2);
    entries = (const PairEntry *)dataTableGetEntries(table);
    count = dataTableGetCount(table);
    bestKey = 0;
    bestValue = 0;
    for (i = 0; i < count; i++) {
        const PairEntry *entry = &entries[i];

        if (entry->key == key) {
            return entries[i].value;
        }
        if (key < 0) {
            if (entry->key >= bestKey) continue;
        } else {
            if (entry->key <= bestKey) continue;
        }
        bestValue = entry->value;
        bestKey = entry->key;
    }
    return bestValue;
}

} /* extern "C" */
