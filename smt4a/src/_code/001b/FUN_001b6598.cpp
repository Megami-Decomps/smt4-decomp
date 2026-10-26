#include "common.h"

extern "C" {
s32 FUN_001bd4a0(s32 first, s32 second, s32 third, s32 fourth, u32 kind);
/* Forwards the request with its fixed kind. */
s32 FUN_001b6598(s32 first, s32 second, s32 third, s32 fourth)
{
    return FUN_001bd4a0(first, second, third, fourth, 3);
}
}
