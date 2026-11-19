#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern s32 g_keyedRecordCount;
extern KeyedRecordVectorPairs g_keyedRecords[];

/* Copies a pair of vectors into the indexed record. */
void keyedRecordSetVectorPair1(s32 index, const VectorPair *vectors)
{
    if (g_keyedRecordCount - index - 1 >= 0) {
        g_keyedRecords[index].pairs[1] = *vectors;
    }
}

} /* extern "C" */
