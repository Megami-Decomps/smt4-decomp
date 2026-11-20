#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
extern WorkCommandState g_soundObjectTable[4];
u32 objectGetFlagBit1(const void *object);

// Request refresh for active playback slots that are not in phase four.
void workCommandRefreshActiveSlots(void)
{
    for (s32 index = 0; index < 4; ++index) {
        WorkCommandState *slot = workCommandGetSlot(g_soundObjectTable, index);
        if (objectGetFlagBit1(slot->object) != 0 && slot->playback.phase != 4) {
            slot->flags |= 4;
            workCommandTimer(slot) = 0;
        }
    }
}
}
