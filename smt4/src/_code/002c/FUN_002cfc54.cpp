/* NON_MATCHING: retail contains branch back to the common store and a linker NOP; compiler emits branch-local stores. */
#include "common.h"

namespace { struct Battle { u8 padding[0x88]; u8 enabled; }; }

extern "C" {
u32 scrGetArg(u32 argument);
Battle *btlGetMainState(void);
u32 FUN_002cfc54(u32 argument)
{
    if (scrGetArg(argument) != 0) { btlGetMainState()->enabled = 1; }
    else { btlGetMainState()->enabled = 0; }
    return 1;
}
}
