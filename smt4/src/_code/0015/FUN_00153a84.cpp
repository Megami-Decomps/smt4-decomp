#include "common.h"

extern "C" {
s32 FUN_00155d3c(s32 first, s32 second, s32 third, s32 fourth, u32 kind);
/* Forwards the request with its fixed kind. */
s32 FUN_00153a84(s32 first, s32 second, s32 third, s32 fourth)
{
    return FUN_00155d3c(first, second, third, fourth, 3);
}
}
