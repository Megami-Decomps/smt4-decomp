#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"


// Keep occupied party slots contiguous while preserving their relative order.
extern "C" void partySlotsCompact(void)
{
    SaveSlotTable *table = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        if (table->party[index] < 0) {
            s32 next = index + 1;
            if (next >= 24)
                return;
            for (;;) {
                if (table->party[next] >= 0) {
                    table->party[index] = table->party[next];
                    table->party[next] = -1;
                    break;
                }
                ++next;
                if (next >= 24)
                    return;
            }
        }
    }
}
