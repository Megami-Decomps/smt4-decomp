#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {
u32 partyEntryFlagsBit3(s32);
u32 partyEntryBitsBit3(s32);

/* 1 when item `id` has a category and flag bit 3 set but its bit-3 entry bit is still clear. */
s32 FUN_003dedf0(u32 id)
{
    ItemDataRecord *record = FUN_001ad9b4(id);
    if (record == NULL)
        return 0;
    if (record->category == 0)
        return 0;
    if (partyEntryFlagsBit3(id) == 0)
        return 0;
    if (FUN_001ad9b4(id) != NULL && partyEntryBitsBit3(id) != 0)
        return 0;
    return 1;
}
}
