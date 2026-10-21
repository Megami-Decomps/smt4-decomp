#include "shard/W5_W5Match5_RecordKeys.h"

extern "C" {

/* Compares record keys for sorting. */
s32 compareRecordKey(const RecordSortEntry *left, const RecordSortEntry *right)
{
    return left->key - right->key;
}

} /* extern "C" */
