#include "shard/W6_W6Match2_QuerySlots.h"

extern "C" {
extern QuerySlot DAT_0061978c[4];
s32 objectGetFlagBit1(u32 handle);

// Report whether any of the four registered slots satisfies its handle query.
u32 querySlotHasHandle()
{
    QuerySlot* found = NULL;
    for (s32 index = 0; index < 4; ++index) {
        QuerySlot* slot = querySlotAt(DAT_0061978c, index);
        if (objectGetFlagBit1(slot->handle) != 0) {
            found = slot;
            break;
        }
    }
    return found != NULL;
}
}
