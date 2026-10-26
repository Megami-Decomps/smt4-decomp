#include "common.h"

extern "C" {

extern s32 FUN_0011b9b0(u32 first, u32 second, u32 third, const u32 *options);

/* Forwards a request with option kind five. */
s32 requestForwardKindFive(u32 first, u32 second, u32 third)
{
    u32 options[3];
    options[0] = 5;
    for (s32 i = 1; i < 3; ++i)
        options[i] = 0;
    return FUN_0011b9b0(first, second, third, options);
}

} /* extern "C" */
