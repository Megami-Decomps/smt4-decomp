#include "common.h"

extern "C" {

s32 FUN_001bd5bc(u32 *out);

/* Forwards to FUN_001bd5bc, the function that follows it. */
s32 FUN_001bd5b8(u32 *out)
{
    return FUN_001bd5bc(out);
}

} /* extern "C" */
