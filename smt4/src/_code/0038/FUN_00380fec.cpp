#include "common.h"

/* Larger of two floats. */
extern "C" f32 FUN_00380fec(f32 a, f32 b)
{
    return a < b ? b : a;
}
