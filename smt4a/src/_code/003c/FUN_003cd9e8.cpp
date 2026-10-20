/* NON_MATCHING: register allocation only: retail keeps the best key in r1, the entry key in r2, the entry pointer in r3 and the count in ip; the build rotates r1-r3/ip. */
#include "common.h"

extern "C" {

typedef struct PairEntry {
    /* 0x00 */ s16 key;
    /* 0x02 */ s16 value;
} PairEntry;

extern u32 dataTableGet(u32 table, u32 index);
extern u32 dataTableGetCount(u32 table);
extern PairEntry *dataTableGetEntries(void);

/* Looks `key` up in table 6/2; without an exact match returns the value of the entry with the largest key (or, for a negative key, the smallest). */
int FUN_003cd9e8(int key)
{
    u32 table;
    PairEntry *entries;
    u32 count;
    int bestKey;
    int bestValue;
    u32 i;

    table = dataTableGet(6, 2);
    entries = dataTableGetEntries();
    count = dataTableGetCount(table);
    bestKey = 0;
    bestValue = 0;
    for (i = 0; i < count; i++) {
        PairEntry *entry = &entries[i];

        if (entry->key == key) {
            return entries[i].value;
        }
        if (key < 0) {
            if (entry->key < bestKey) {
                bestValue = entry->value;
                bestKey = entry->key;
            }
        } else if (bestKey < entry->key) {
            bestValue = entry->value;
            bestKey = entry->key;
        }
    }
    return bestValue;
}

} /* extern "C" */
