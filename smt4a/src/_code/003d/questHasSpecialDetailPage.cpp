#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {
u32 partyEntryBitsBit3(s32 index);

u32 questHasSpecialDetailPage(u32 id)
{
    if (FUN_001ad9b4(id) != NULL) {
        return partyEntryBitsBit3(id);
    }
    return 0;
}
}
