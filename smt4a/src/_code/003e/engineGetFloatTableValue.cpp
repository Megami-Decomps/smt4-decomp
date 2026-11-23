#include "ui/FloatTableLookup.h"

/* Reads one float from the supplied table or its built-in fallback. */
extern "C" f32 engineGetFloatTableValue(const f32 *values, u32 index)
{
    return engineFloatTableValue(values, index);
}
