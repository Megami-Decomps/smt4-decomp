#include "common.h"
#include "classes/AllocatedArray.h"

struct WeightedItem {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ float weight;
};

/* One list entry; the value fields besides the weight and the item are left unset when an entry is added. */
struct WeightedEntry {
    float unk00;
    float weight;
    float unk08;
    WeightedItem *item;
};

struct WeightedEntryList {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AllocatedArray<WeightedEntry> entries;
};

/* Appends an entry for `item`, keyed by its weight. */
extern "C" void weightedEntryListAdd(WeightedEntryList *list, WeightedItem *item)
{
    WeightedEntry entry;
    entry.weight = item->weight;
    entry.item = item;
    list->entries.push_back(entry);
}
