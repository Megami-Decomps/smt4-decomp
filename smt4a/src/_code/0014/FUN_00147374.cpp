#include "common.h"

extern "C" {

extern s8 g_nnAppletState;

/* Returns the signed byte at 0x5891D8. */
s32 FUN_00147374(void)
{
    return g_nnAppletState;
}

} /* extern "C" */
