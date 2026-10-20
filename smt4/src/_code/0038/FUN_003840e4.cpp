#include "common.h"

extern "C" {

/* Sets flag bit 0. */
void FUN_003840e4(u32 *flags)
{
    *flags = *flags | 1;
}

} /* extern "C" */
