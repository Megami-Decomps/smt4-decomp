#include "common.h"

extern "C" {

/* Returns the word at 0x1FF80040: entry 16 of the 3DS kernel configuration page. */
u32 nnosGetAppMemAlloc(void)
{
    return ((u32 *)0x1FF80000)[16];
}

} /* extern "C" */
