#include "shard/W6_W6Match2_QuerySlots.h"

extern "C" {
extern QuerySlot DAT_004c5634[4];
s32 FUN_002c1850(u32 handle);

// Report whether any of the four registered slots satisfies its handle query.
u32 querySlotHasHandle()
{
    QuerySlot* found = NULL;
    for (s32 index = 0; index < 4; ++index) {
        QuerySlot* slot = querySlotAt(DAT_004c5634, index);
        if (FUN_002c1850(slot->handle) != 0) {
            found = slot;
            break;
        }
    }
    return found != NULL;
}
}
