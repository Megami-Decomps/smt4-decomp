#include "gamedata/DataTable.h"
#include "gamedata/DataTableSections.h"

struct WeightedTableEntry {
    u32 id : 8;
    u32 weight : 24;
};
typedef char WeightedTableEntrySizeCheck[sizeof(WeightedTableEntry) == 4 ? 1 : -1];

extern "C" u32 randRange(u32 maximum);

/* Choose a low-byte id using the upper twenty-four bits of each table word as its weight. */
extern "C" u32 dataTableChooseWeightedByteId(void)
{
    u32 result = 0;
    void *table = dataTableGet(5, 7);
    const WeightedTableEntry *entries =
        static_cast<const WeightedTableEntry *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    u32 total = 0;
    for (u32 index = 0; index < count; ++index) {
        total += entries[index].weight;
    }
    entries = static_cast<const WeightedTableEntry *>(dataTableGetEntries(table));
    u32 choice = randRange((total - 1) & 0xFFFF);
    u32 accumulated = 0;
    for (u32 index = 0; index < count; ++index, ++entries) {
        accumulated += entries->weight;
        if (choice < accumulated) {
            result = entries->id;
            break;
        }
    }
    return result;
}
