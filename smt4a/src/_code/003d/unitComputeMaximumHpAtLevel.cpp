/* NON_MATCHING: -O2 candidate; allocation-size CSE, range cursor folding, percentage constant lifetime and preserved registers differ. */
#include "shard/W6_W6Match8_StatGrowth.h"
#include "gamedata/DataTable.h"

extern "C" {
void *asdOperatorNewD(u32 size);
void asdOperatorDeleteC(void *memory);
void rt_memclr(void *memory, u32 size);
void aocCollectLevelEntries(LevelEntry *entries, s32 *count, u32 kind, s32 maximumLevel);

u32 unitComputeMaximumHpAtLevel(s32 level, const StatGrowthParameters *parameters)
{
    u32 kind = parameters->kind;
    void *section = dataTableGet(9, 4);
    const LevelEntry *table = (const LevelEntry *)dataTableGetEntries(section);
    u32 tableCount = dataTableGetCount(section);
    s32 matching = 0;
    for (u32 index = 0; index < tableCount; ++index) {
        if (table[index].kind == kind) {
            ++matching;
        }
    }
    s32 count = 0;
    LevelEntry *entries = (LevelEntry *)asdOperatorNewD((matching + 1) * sizeof(LevelEntry));
    rt_memclr(entries, matching * sizeof(LevelEntry));
    aocCollectLevelEntries(entries, &count, kind, level);
    s16 growth = 0;
    s32 remaining = (u32)count;
    for (const LevelEntry *entry = entries; remaining != 0; --remaining, ++entry) {
        u16 levels = 0;
        if (entry->id < level) {
            levels = (u16)(entry->id - entry->level + 1);
        } else if (entry->level <= level) {
            levels = (u16)(level - entry->level + 1);
        }
        u32 rate = ((u32)parameters->hpGrowth * (u32)entry->rateA) / 100;
        growth += levels * rate;
    }
    u16 total = parameters->baseHp + growth;
    if (total > 9999) {
        asdOperatorDeleteC(entries);
        return 9999;
    }
    asdOperatorDeleteC(entries);
    return total;
}
}
