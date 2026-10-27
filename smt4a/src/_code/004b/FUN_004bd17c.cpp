/* NON_MATCHING: the category-rank read now uses retail's record + category address form; the rank-slot address and value registers (retail r0/r1/r2) are allocated differently. */
#include "common.h"
#include "shard/Shard004B.h"
#include "gamedata/Table04Record.h"

extern "C" s32 FUN_00184310(u16 id);

// Apply each item's category modifier, clamping its signed rank to -9..9.
extern "C" void FUN_004bd17c(ItemRankRecord *record)
{
    if (record == NULL)
        return;
    if (record->id && FUN_00184310(record->id)) {
        for (s32 i = 0; i < 8; ++i) {
            if (record->items[i]) {
                ItemRankDefinition *item = (ItemRankDefinition *)dataTable04FindById(record->items[i]);
                if (item && item->category < 18) {
                    u32 category = item->category;
                    s8 rank = record->categoryRanks[category] + record->ranks[i];
                    record->ranks[i] = rank;
                    if (rank > 9)
                        record->ranks[i] = 9;
                    else if (rank < -9)
                        record->ranks[i] = -9;
                }
            }
        }
    }
}
