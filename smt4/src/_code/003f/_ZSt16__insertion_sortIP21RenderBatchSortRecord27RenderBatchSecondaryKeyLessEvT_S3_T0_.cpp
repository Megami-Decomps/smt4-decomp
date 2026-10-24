/* NON_MATCHING: vector register assignment differs (retail keeps the saved record in s3-s5 so the in-place record moves split into a three-register block plus a single word; the compiler picks s4-s6 and moves whole records through s0-s3). */
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
