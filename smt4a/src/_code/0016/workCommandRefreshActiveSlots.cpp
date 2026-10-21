#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
extern WorkCommandState DAT_0061978c[4];
u32 FUN_001681a4(const void *object);

// Request refresh for active playback slots that are not in phase four.
void workCommandRefreshActiveSlots(void)
{
    for (s32 index = 0; index < 4; ++index) {
        WorkCommandState *slot = workCommandGetSlot(DAT_0061978c, index);
        if (FUN_001681a4(slot->object) != 0 && slot->playback.phase != 4) {
            slot->flags |= 4;
            workCommandTimer(slot) = 0;
        }
    }
}
}
