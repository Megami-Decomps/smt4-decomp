#include "shard/W5_W5Match1_RecordKeys.h"
#include "code/Code0023.h"

extern "C" {

extern KeyedRecord g_keyedRecords[];

/* Returns the indexed keyed record payload. */
void *FUN_00239218(u32 index)
{
    return g_keyedRecords[index].payload;
}

} /* extern "C" */
