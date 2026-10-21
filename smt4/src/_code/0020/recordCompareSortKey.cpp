#include "shard/W5_W5Match2_ScalarRecord.h"

extern "C" {

/* Order records by their unsigned halfword sort key. */
s32 recordCompareSortKey(const SortKeyRecord *left, const SortKeyRecord *right)
{
    return left->sortKey - right->sortKey;
}

}
