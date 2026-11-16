#include "classes/AllocatedArray.h"

extern "C" {

// Appends a word to an allocator-backed array (the traverser's render-node list); returns whether it fitted.
u32 FUN_0023669c(AllocatedArray<u32> *array, const u32 *value)
{
    return array->push_back(*value);
}

} /* extern "C" */
