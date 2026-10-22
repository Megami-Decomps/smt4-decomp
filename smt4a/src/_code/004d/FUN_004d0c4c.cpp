/* NON_MATCHING: the bounded search loop is peeled and allocates its cursor/empty-slot registers differently from retail. */
#include "shard/Shard0031.h"

extern "C" SlotTable *gameGetSlotTable(void);

// Keep occupied party slots contiguous while preserving their relative order.
extern "C" void FUN_004d0c4c(void)
{
    SlotTable *table = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        if (table->slots[index] < 0) {
            s32 next = index + 1;
            if (next >= 24)
                return;
            while (table->slots[next] < 0) {
                ++next;
                if (next >= 24)
                    return;
            }
            table->slots[index] = table->slots[next];
            table->slots[next] = -1;
        }
    }
}
