#include "shard/W5_W5Match5_RecordKeys.h"

extern "C" {

/* Compares record keys for sorting. */
s32 compareRecordKey(const void *left, const void *right)
{
    return ((const RecordSortEntry *)left)->key - ((const RecordSortEntry *)right)->key;
}

} /* extern "C" */
