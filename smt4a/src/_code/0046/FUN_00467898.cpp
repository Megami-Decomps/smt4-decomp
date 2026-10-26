#include "common.h"

/* Smaller of the first and third float arguments. */
extern "C" f32 FUN_00467898(f32 a, f32 unused, f32 b)
{
    return a > b ? b : a;
}
