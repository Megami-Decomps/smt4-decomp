#include "shard/W5_W5Match7_DataRecord.h"
#include "code/Code003d_Smt4a.h"

extern "C" {



u32 itemDataGetValue(u32 id)
{
    ItemDataRecord *record = dataTable1bOr1cGetRecord(id);
    return record != NULL ? record->value : 0;
}

} /* extern "C" */
