/* NON_MATCHING: compiler adds an explicit zero-return block and duplicates the epilogue instead of reusing early zero results. */
#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {
u32 partyEntryFlagsBit3(u32);
u32 partyEntryBitsBit3(u32);

bool FUN_003dedf0(u32 id)
{
    ItemDataRecord *record = FUN_001ad9b4(id);
    if (record == NULL || record->category == 0)
        return false;
    if (partyEntryFlagsBit3(id) == 0)
        return false;
    return FUN_001ad9b4(id) == NULL || partyEntryBitsBit3(id) == 0;
}
}
