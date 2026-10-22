#ifndef SYS_INPUTHOLDCOUNTERS_H
#define SYS_INPUTHOLDCOUNTERS_H
#include "common.h"
#include <stddef.h>

struct InputCounterBinding {
    u32 sourceSelector;
    u32 mask;
};
struct InputHoldGlobals {
    s32 device;
    s32 available;
    u32 flags;
};
typedef char InputCounterBindingLayoutCheck[
    offsetof(InputCounterBinding, mask) == 4 && sizeof(InputCounterBinding) == 8 ? 1 : -1];
typedef char InputHoldGlobalsLayoutCheck[
    offsetof(InputHoldGlobals, available) == 4 && offsetof(InputHoldGlobals, flags) == 8 &&
    sizeof(InputHoldGlobals) == 0xC ? 1 : -1];
#endif
