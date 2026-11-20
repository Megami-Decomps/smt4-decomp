#include "common.h"

extern "C" {

extern s8 g_contentMounted;

/* Returns the signed byte at 0x005b40c8. */
s32 FUN_00138ca4(void)
{
    return g_contentMounted;
}

} /* extern "C" */
