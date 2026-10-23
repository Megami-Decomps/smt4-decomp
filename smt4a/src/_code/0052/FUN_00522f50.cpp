/* NON_MATCHING: STL record transfers and saved-value/unguarded-iterator registers differ. */
#include "gfx/RenderBatchSortRecord.h"
#include <algorithm>

struct RenderBatchKeyLess {
    bool operator()(const RenderBatchSortRecord &left, const RenderBatchSortRecord &right) const
    {
        return left.key < right.key;
    }
};

/* Stable insertion sort used to finish batches ordered by their primary key. */
extern "C" void FUN_00522f50(RenderBatchSortRecord *first, RenderBatchSortRecord *last)
{
    if (first == last)
        return;
    for (RenderBatchSortRecord *current = first + 1; current != last; ++current)
        std::__linear_insert(first, current, (RenderBatchSortRecord *)NULL, RenderBatchKeyLess());
}
