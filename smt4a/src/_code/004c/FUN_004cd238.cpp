/* NON_MATCHING: allocation-size CSE and preserved-register allocation differ; both versions have 66 instructions. */
#include "common.h"
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match8_StatGrowth.h"

extern "C" {
void *asdOperatorNewD(u32 size);
void asdOperatorDeleteC(void *memory);
void rt_memclr(void *memory, u32 size);
void aocCollectLevelEntries(LevelEntry *entries, u32 *count, u32 kind, u32 maxLevel);

// Sum the per-level bonus over a level increase, including add-on growth ranges.
u16 FUN_004cd238(u32 level, s32 levelCount)
{
    u16 total = 0;
    void *table = dataTableGet(9, 4);
    const LevelEntry *entries = static_cast<const LevelEntry *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    s32 matchingCount = 0;
    for (u32 index = 0; index < count; ++index) {
        if (entries[index].kind == 1)
            ++matchingCount;
    }
    u32 rangeCount = 0;
    LevelEntry *ranges = static_cast<LevelEntry *>(asdOperatorNewD((matchingCount + 1) * sizeof(LevelEntry)));
    rt_memclr(ranges, matchingCount * sizeof(LevelEntry));
    aocCollectLevelEntries(ranges, &rangeCount, 1, level + levelCount);
    for (s32 step = 0; step < levelCount; ++step) {
        level = static_cast<u16>(level + 1);
        for (u32 index = 0; index < rangeCount; ++index) {
            if (ranges[index].level <= level && level <= ranges[index].id) {
                total += ranges[index].flags;
                break;
            }
        }
    }
    asdOperatorDeleteC(ranges);
    return total;
}
}
