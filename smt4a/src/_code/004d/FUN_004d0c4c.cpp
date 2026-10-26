/* NON_MATCHING: the bounded search loop is peeled and allocates its cursor/empty-slot registers differently from retail. */
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"


// Keep occupied party slots contiguous while preserving their relative order.
extern "C" void FUN_004d0c4c(void)
{
    SaveSlotTable *table = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        if (table->party[index] < 0) {
            s32 next = index + 1;
            if (next >= 24)
                return;
            while (table->party[next] < 0) {
                ++next;
                if (next >= 24)
                    return;
            }
            table->party[index] = table->party[next];
            table->party[next] = -1;
        }
    }
}
