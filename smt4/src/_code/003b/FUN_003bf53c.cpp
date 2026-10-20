#include "common.h"

extern "C" {

/* a * d (floats), truncated to int, plus b and c. */
int FUN_003bf53c(u32 unused, int b, int c, f32 a, f32 f1, f32 f2, f32 d)
{
    return (int)(a * d) + b + c;
}

} /* extern "C" */
