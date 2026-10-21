/* NON_MATCHING: instruction selection/order differs: retail mov r3, #5; compiler vldmia r3, {s0-s2}. */
#include "common.h"

extern "C" {

extern s32 FUN_0011b9b0(u32 first, u32 second, u32 third, const u32 *options);

/* Forwards a request with option kind five. */
s32 FUN_0010f7b8(u32 first, u32 second, u32 third)
{
    u32 options[3] = {5, 0, 0};
    return FUN_0011b9b0(first, second, third, options);
}

} /* extern "C" */
