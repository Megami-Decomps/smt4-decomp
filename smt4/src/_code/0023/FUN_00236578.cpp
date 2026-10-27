#include "classes/AllocatedArray.h"

extern "C" {

// Appends a word to an allocator-backed array; returns whether it fitted.
u32 FUN_00236578(AllocatedArray<u32> *array, const u32 *value)
{
    return array->push_back(*value);
}

} /* extern "C" */
