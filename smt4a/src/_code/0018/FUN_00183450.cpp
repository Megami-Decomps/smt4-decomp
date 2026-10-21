#include "shard/W5_W5Match5_RecordKeys.h"

extern "C" {

/* Compares record keys for sorting. */
s32 FUN_00183450(const ResourceSortEntry *left, const ResourceSortEntry *right)
{
    return left->key - right->key;
}

} /* extern "C" */
