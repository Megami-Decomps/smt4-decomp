/* NON_MATCHING: instruction selection/order differs: retail sub r2, r2, r0; compiler cmp r0, r2. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern s32 g_keyedRecordCount;
extern KeyedRecordVectorPairs g_keyedRecords[];

/* Copies a pair of vectors into the indexed record. */
void FUN_0023aac8(s32 index, const VectorPair *vectors)
{
    if (index < g_keyedRecordCount) {
        g_keyedRecords[index].pairs[3] = *vectors;
    }
}

} /* extern "C" */
