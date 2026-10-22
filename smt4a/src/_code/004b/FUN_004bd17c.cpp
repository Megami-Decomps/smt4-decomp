/* NON_MATCHING: armcc hoists the category-rank array base into r6 and shifts the loop's value-register allocation. */
#include "common.h"
#include "shard/Shard004B.h"

extern "C" s32 FUN_00184310(u16 id);
extern "C" ItemRankDefinition *dataTable04FindById(u16 id);

// Apply each item's category modifier, clamping its signed rank to -9..9.
extern "C" void FUN_004bd17c(ItemRankRecord *record)
{
    if (record == NULL)
        return;
    if (record->id && FUN_00184310(record->id)) {
        for (s32 i = 0; i < 8; ++i) {
            if (record->items[i]) {
                ItemRankDefinition *item = dataTable04FindById(record->items[i]);
                if (item && item->category < 18) {
                    s8 rank = record->ranks[i] + record->categoryRanks[item->category];
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
