#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

namespace { struct Battle { u8 padding[0x4968]; s16 first; s16 second; }; }

extern "C" {
u32 FUN_002e3f28(void)
{
    s16 value = reinterpret_cast<Battle *>(btlGetMainState())->first;
    s16 other = reinterpret_cast<Battle *>(btlGetMainState())->second;
    if (other > value) { value = other; }
    scrSetResult(value);
    return 1;
}
}
