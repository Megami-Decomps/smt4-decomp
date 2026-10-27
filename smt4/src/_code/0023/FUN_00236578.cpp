/* NON_MATCHING: the begin/end pair is loaded with `ldm r0, {r0, r2}` where retail uses `ldm r2, {r0, r2}` (and sets the zero count after the load); everything else matches. */
#include "classes/AllocatedArray.h"

extern "C" {

// Appends a word to an allocator-backed array; returns whether it fitted.
u32 FUN_00236578(AllocatedArray<u32> *array, const u32 *value)
{
    return array->push_back(*value);
}

} /* extern "C" */
