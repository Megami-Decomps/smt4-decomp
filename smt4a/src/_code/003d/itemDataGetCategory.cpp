#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {



u32 itemDataGetCategory(u32 id)
{
    ItemDataRecord *record = dataTable1bOr1cGetRecord(id);
    return record != NULL ? record->category : 0;
}

} /* extern "C" */
