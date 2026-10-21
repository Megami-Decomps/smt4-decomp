/* NON_MATCHING: compiler converts the iterator range to an element-count loop. */
#include "common.h"
/* Copies the input range while allowing a null output iterator. */
extern "C" void FUN_002ff8ce(const u32 *begin, const u32 *end, u32 *output) {
    for (; begin != end; ++begin, ++output)
        if (output != NULL) *output = *begin;
}
