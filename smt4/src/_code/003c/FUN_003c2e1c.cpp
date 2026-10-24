#include "common.h"

extern "C" {
void uiPointerHitsRect(s32 first, s32 second, s32 third, s32 fourth, s32 kind);
/* Forwards the request with its fixed kind. */
void FUN_003c2e1c(s32 first, s32 second, s32 third, s32 fourth)
{
    uiPointerHitsRect(first, second, third, fourth, 0);
}
}
