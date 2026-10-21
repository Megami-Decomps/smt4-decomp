#include "common.h"

extern "C" {

extern s32 FUN_00158694(u32 first, u32 second, u32 third, const u32 *options);

/* Forwards a request with cleared default options. */
s32 FUN_001467e0(u32 first, u32 second, u32 third)
{
    u32 options[3] = {0, 0, 0};
    return FUN_00158694(first, second, third, options);
}

} /* extern "C" */
