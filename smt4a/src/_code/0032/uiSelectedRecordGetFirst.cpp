#include "shard/W5_W5Match7_SelectedRecord.h"

extern "C" {



u32 uiSelectedRecordGetFirst(void)
{
    SelectionOwner *owner = g_callbackWork;
    if (owner == NULL)
        return 0;
    if (owner->index < 0)
        return 0;
    return FUN_002613f0(owner->index)->values[0];
}

} /* extern "C" */
