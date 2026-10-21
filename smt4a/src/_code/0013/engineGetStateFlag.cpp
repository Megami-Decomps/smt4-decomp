#include "common.h"

extern "C" {

extern s8 g_engineStateFlag;

/* Returns the signed byte at 0x580200. */
s32 engineGetStateFlag(void)
{
    return g_engineStateFlag;
}

} /* extern "C" */
