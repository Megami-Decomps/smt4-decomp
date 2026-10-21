#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {



u32 itemDataGetCategory(u32 id)
{
    ItemDataRecord *record = FUN_001ad9b4(id);
    return record != NULL ? record->category : 0;
}

} /* extern "C" */
