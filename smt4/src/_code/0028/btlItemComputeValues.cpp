#include "common.h"

extern "C" {
const void* dataTable08Sub1GetRecord(u32 id);
u32 FUN_00232b68(u32 owner, const void* record, s32 mode, u32* first, u32* second);

// Resolve the item record and compute both output values when it exists.
u32 btlItemComputeValues(u32 owner, u32 id, u32* first, u32* second)
{
    *first = 0;
    *second = 0;
    const void* record = dataTable08Sub1GetRecord(id);
    if (record == NULL)
        return 1;
    return FUN_00232b68(owner, record, 1, first, second);
}
}
