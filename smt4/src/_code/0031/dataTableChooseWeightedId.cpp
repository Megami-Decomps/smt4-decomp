#include "gamedata/DataTable.h"

extern "C" u32 randNextInRange(u32 maximum);

struct PackedWeightedId {
    u32 id : 8;
    u32 weight : 24;
};
typedef char PackedWeightedIdSizeCheck[sizeof(PackedWeightedId) == 4 ? 1 : -1];

/* Choose a low-byte id using the upper twenty-four bits of each table word as its weight. */
extern "C" u32 dataTableChooseWeightedId(void)
{
    u32 result = 0;
    void *table = dataTableGet(5, 7);
    const PackedWeightedId *entries = static_cast<const PackedWeightedId *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    u32 total = 0;
    for (u32 index = 0; index < count; ++index) {
        total += entries[index].weight;
    }
    entries = static_cast<const PackedWeightedId *>(dataTableGetEntries(table));
    u32 choice = randNextInRange((total - 1) & 0xFFFF);
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
