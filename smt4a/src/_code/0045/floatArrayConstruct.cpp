#include "Model/MoriModelUnit.h"

/* Binds and clears the floating-point array. Its caller supplies at least one element. */
extern "C" void floatArrayConstruct(FloatArray *array, f32 *values, u32 count)
{
    array->values = values;
    array->count = count;
    s32 i = 0;
    do {
        (*array)[i++] = 0.0f;
    } while (i <= count - 1);
}
