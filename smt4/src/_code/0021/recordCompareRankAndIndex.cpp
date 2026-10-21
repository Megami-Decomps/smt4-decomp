#include "shard/W5_W5Match2_ScalarRecord.h"

extern "C" {

/* Order by descending rank, then ascending index for ties. */
s32 recordCompareRankAndIndex(const RankedRecord *left, const RankedRecord *right)
{
    s32 difference = right->rank - left->rank;
    if (difference == 0) {
        difference = left->index - right->index;
    }
    return difference;
}

}
