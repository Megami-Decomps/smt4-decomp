#include "common.h"

extern "C" {
void FUN_002bff6c(s32 first, s32 second, s32 third, s32 fourth, s32 kind);
/* Forwards the request with its fixed kind. */
void FUN_003c2e1c(s32 first, s32 second, s32 third, s32 fourth)
{
    FUN_002bff6c(first, second, third, fourth, 0);
}
}
