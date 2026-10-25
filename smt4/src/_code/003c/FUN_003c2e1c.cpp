#include "common.h"

extern "C" {
s32 uiPointerHitsRect(s32 first, s32 second, s32 third, s32 fourth, u32 kind);
/* Forwards the request with its fixed kind. */
s32 FUN_003c2e1c(s32 first, s32 second, s32 third, s32 fourth)
{
    return uiPointerHitsRect(first, second, third, fourth, 0);
}
}
