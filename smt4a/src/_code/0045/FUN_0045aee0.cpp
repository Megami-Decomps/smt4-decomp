/* NON_MATCHING: armcc unrolls the halfword initialization loop; retail keeps the one-element loop. */
#include "common.h"
struct IdArray { u16 *values; u32 count; };
/* Binds the array and initializes all IDs to the invalid sentinel. */
extern "C" void FUN_0045aee0(IdArray *array, u16 *values, u32 count)
{
    array->values = values;
    array->count = count;
    for (u32 i = 0; i < count; ++i)
        array->values[i] = 0xFFFF;
}
