#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Looks up a fixed-size record when the table exists. */
FixedRecord *FUN_00145e34(FixedRecordTable *table, u32 index)
{
    return table != NULL ? &table->records[index] : NULL;
}

} /* extern "C" */
