#include "common.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {
u32 itemApplyToMember(u32 owner, const void* record, s32 mode, u32* first, u32* second);

// Resolve the item record and compute both output values when it exists.
u32 btlItemComputeValues(u32 owner, u32 id, u32* first, u32* second)
{
    *first = 0;
    *second = 0;
    const void* record = dataTable08Sub1GetRecord(id);
    if (record == NULL)
        return 1;
    return itemApplyToMember(owner, record, 1, first, second);
}
}
