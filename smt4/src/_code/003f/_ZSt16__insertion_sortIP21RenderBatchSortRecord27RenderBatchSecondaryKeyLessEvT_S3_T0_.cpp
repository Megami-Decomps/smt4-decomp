#include "gfx/RenderBatchSortRecord.h"
#include <algorithm>

struct RenderBatchSecondaryKeyLess {
    bool operator()(const RenderBatchSortRecord &left, const RenderBatchSortRecord &right) const
    {
        return left.secondaryKey < right.secondaryKey;
    }
};

/* std::__insertion_sort of batch records ordered by their secondary key (the head-of-range pass of std::sort). */
template void std::__insertion_sort(RenderBatchSortRecord *, RenderBatchSortRecord *, RenderBatchSecondaryKeyLess);
