#include "common.h"

extern "C" {

extern u32 g_nngxLastError;

/* Returns the word at 0x589184 and clears it. */
u32 nngxGetError(void)
{
    u32 value;

    value = g_nngxLastError;
    g_nngxLastError = 0;
    return value;
}

} /* extern "C" */
