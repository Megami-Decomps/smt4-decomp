#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlReflect.h"

extern "C" {

/* Queues a kind-0x22 action with parameter 0xff for every active action record from 67 to 108. */
u32 btlReflectQueueFlaggedRecords(s32 actorIndex, u32 options, u32 value)
{
    for (s32 index = 67; index < 109; ++index) {
        BtlActionRecord *record = &btlGetMainState()->actions[index];
        if (record->status & 0x8000) {
            reflectCreateKind22(actorIndex, options, (u32)record, 0xff, value, 0);
        }
    }
    return 1;
}
} /* extern "C" */
