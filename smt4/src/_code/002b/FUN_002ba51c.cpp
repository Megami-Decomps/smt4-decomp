#include "common.h"

extern "C" {
u32 FUN_0013b4a4(u32 first, u32 second, s32 size);

/* Forwards the GPU service request. */
u32 FUN_002ba51c(u32 first, u32 second, s32 size)
{
    return FUN_0013b4a4(first, second, size);
}
}
