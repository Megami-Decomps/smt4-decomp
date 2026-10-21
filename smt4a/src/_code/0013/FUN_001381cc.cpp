#include "common.h"

extern "C" {

extern s8 g_engineStateFlag;

/* Returns the signed byte at 0x580200. */
s32 FUN_001381cc(void)
{
    return g_engineStateFlag;
}

} /* extern "C" */
