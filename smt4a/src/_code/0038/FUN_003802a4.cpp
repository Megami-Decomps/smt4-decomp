#include "common.h"

extern "C" {

extern u32 g_btlAux;

s32 FUN_004f6d34(u32 value);

/* Script condition: FUN_004f6d34 accepts the battle aux value. */
s32 FUN_003802a4(void)
{
    return FUN_004f6d34(g_btlAux) != 0;
}

} /* extern "C" */
