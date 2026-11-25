#include "gamedata/ConsumableRecordA.h"

extern "C" {
u16 flagValueRead(s32 id);

/* Finds the first item with the content flag and reads its value when its id is valid. */
u32 contentGetFirstFlaggedValue(void)
{
    enum { LAST_CONTENT_ITEM_ID = 0x7de, CONTENT_ITEM_FLAG = 1 << 3 };
    const u32 count = LAST_CONTENT_ITEM_ID;
    u32 result = 0;
    u32 foundId = 0;
    for (u32 id = 0; id < count + 1; id++) {
        const ConsumableRecordA *record = itemTableGetItemRecord(id);
        if (record != NULL && (record->flags & CONTENT_ITEM_FLAG)) {
            foundId = id;
            break;
        }
    }
    if (foundId - 1 < count) {
        result = flagValueRead(foundId);
    }
    return result;
}
} /* extern "C" */
