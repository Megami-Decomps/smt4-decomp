#include "common.h"

extern "C" {

extern u32 g_processResultState;

/* Returns the first word of the global block at 0x5B40B4. */
u32 globalBlockGetFirst(void)
{
    return g_processResultState;
}

} /* extern "C" */
