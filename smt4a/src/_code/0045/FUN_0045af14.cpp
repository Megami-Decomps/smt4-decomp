/* NON_MATCHING: armcc unrolls the floating initialization loop; retail keeps the one-element loop. */
#include "common.h"
struct FloatArray { f32 *values; u32 count; };
/* Binds and clears the floating array; the caller provides a nonempty count. */
extern "C" void FUN_0045af14(FloatArray *array, f32 *values, u32 count)
{
    array->values = values;
    array->count = count;
    u32 index = 0;
    do {
        array->values[index] = 0.0f;
        ++index;
    } while (index <= count - 1);
}
