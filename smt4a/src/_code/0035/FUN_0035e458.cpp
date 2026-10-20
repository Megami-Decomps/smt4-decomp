#include "common.h"

extern "C" {

s32 FUN_0035e460(u32 id, s32 positive);

/* Forwards to FUN_0035e460 (the function that follows) with its flag set. */
s32 FUN_0035e458(u32 id)
{
    return FUN_0035e460(id, 1);
}

} /* extern "C" */
