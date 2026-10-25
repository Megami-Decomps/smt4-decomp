/* NON_MATCHING: compiler adds an explicit zero-return block and duplicates the epilogue instead of reusing early zero results. */
#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {
u32 partyEntryFlagsBit3(s32);
u32 partyEntryBitsBit3(s32);

s32 FUN_003dedf0(u32 id)
{
    ItemDataRecord *record = FUN_001ad9b4(id);
    if (record != NULL && record->category != 0 && partyEntryFlagsBit3(id) != 0) {
        if (FUN_001ad9b4(id) == NULL || partyEntryBitsBit3(id) == 0)
            return 1;
    }
    return 0;
}
}
