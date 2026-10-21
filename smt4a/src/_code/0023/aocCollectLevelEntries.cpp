#include "shard/W6_W6Match8_StatGrowth.h"

extern "C" {


extern u32 dataTableGet(u32 table, u32 index);
extern u32 dataTableGetCount(u32 table);
extern LevelEntry *dataTableGetEntries(void);
extern int wordPairCopy(LevelEntry *dst, const LevelEntry *src);

/* Collects the table 9/4 entries of `kind` whose level is at most `maxLevel` into `out`, then appends a default entry; *count receives the number written. */
void aocCollectLevelEntries(LevelEntry *out, int *count, u32 kind, int maxLevel)
{
    u32 table = dataTableGet(9, 4);
    LevelEntry *entries = dataTableGetEntries();
    u32 numEntries = dataTableGetCount(table);
    u32 i;

    *count = 0;
    for (i = 0; i < numEntries; i++) {
        if (entries[i].kind == kind && entries[i].level <= maxLevel) {
            wordPairCopy(&out[*count], &entries[i]);
            *count = *count + 1;
        }
    }
    out[*count].level = 1;
    out[*count].id = 99;
    out[*count].kind = kind;
    out[*count].rateA = 100;
    out[*count].rateB = 100;
    out[*count].flags = 5;
    *count = *count + 1;
}

} /* extern "C" */
