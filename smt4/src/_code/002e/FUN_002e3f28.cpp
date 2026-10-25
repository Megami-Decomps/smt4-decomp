#include "common.h"
#include "script/ScriptArgs.h"

namespace { struct Battle { u8 padding[0x4968]; s16 first; s16 second; }; }

extern "C" {
Battle *btlGetMainState(void);
u32 FUN_002e3f28(void)
{
    s16 value = btlGetMainState()->first;
    s16 other = btlGetMainState()->second;
    if (other > value) { value = other; }
    scrSetResult(value);
    return 1;
}
}
