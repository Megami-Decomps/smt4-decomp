/* NON_MATCHING: the category-rank read forms the +0x4c array base before indexing; retail adds the category to the record then uses ldrsb #0x4c. */
#include "shard/Shard004B.h"
#include "gamedata/Table04Record.h"

extern "C" {
s32 FUN_0035e458(u32 item);
s32 FUN_0035d89c(u32 item);
}

/* Set one equipped item and clamp its inherited category rank to the item limits. */
extern "C" void FUN_004bd6b0(ItemRankRecord *record, u32 item, s32 slot)
{
    if (record == NULL || slot >= 8) {
        return;
    }
    record->items[slot] = (u16)item;
    ItemRankDefinition *definition = (ItemRankDefinition *)dataTable04FindById(item);
    s8 rank = 0;
    if (definition != NULL && definition->category < 18) {
        rank = record->categoryRanks[definition->category];
    }
    s32 maximum = FUN_0035e458(item);
    s32 minimum = FUN_0035d89c(item);
    if (rank > maximum) {
        rank = (s8)maximum;
    } else if (minimum > rank) {
        rank = (s8)minimum;
    }
    record->ranks[slot] = rank;
}
