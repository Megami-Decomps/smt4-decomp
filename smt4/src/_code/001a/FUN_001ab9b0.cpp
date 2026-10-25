#include "shard/W5_W5Match1_RecordKeys.h"
#include "gfx/KeyedVectorTransition.h"

extern "C" {

extern KeyedRecord g_keyedRecords[];

/* Returns the indexed keyed record payload. */
void *FUN_001ab9b0(u32 index)
{
    return g_keyedRecords[index].payload;
}

} /* extern "C" */
