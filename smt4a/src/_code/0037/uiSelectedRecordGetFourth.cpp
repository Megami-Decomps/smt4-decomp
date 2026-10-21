/* NON_MATCHING: retail uses `bxeq lr` where armcc emits `beq 1c`. */
#include "shard/W5_W5Match7_SelectedRecord.h"

extern "C" {



u32 uiSelectedRecordGetFourth(void)
{
    SelectionOwner *owner = g_callbackWork;
    if (owner == NULL || owner->index < 0) {
        return 0;
    }
    return FUN_002613f0(owner->index)->values[3];
}

} /* extern "C" */
