/* NON_MATCHING: std::fill matches the loop unrolling, but armcc uses pre-indexed stores with an initial pointer decrement instead of retail's post-indexed stores. */
#include "classes/WordVector.h"
#include <algorithm>

/* Clear every flag in the cursor owner's three active word ranges. */
extern "C" void FUN_00156a90(CursorFlagLists *flags)
{
    std::fill(flags->first.begin, flags->first.end, 0U);
    std::fill(flags->second.begin, flags->second.end, 0U);
    std::fill(flags->third.begin, flags->third.end, 0U);
}
