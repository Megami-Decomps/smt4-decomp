#include "nw/ut/MoveArray.h"

/* Append one word to an allocator-owned array. */
extern "C" bool FUN_00515cec(nw::ut::MoveArray<u32> *array, const u32 *value)
{
    return array->push_back(*value);
}
