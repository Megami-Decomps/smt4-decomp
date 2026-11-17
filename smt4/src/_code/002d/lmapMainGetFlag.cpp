#include "common.h"
#include "map/LmapMainGlobals.h"

extern "C" {
/* Reads or computes the requested value. */
s32 lmapMainGetFlag(void)
{
    return g_lmapMainState != NULL ? g_lmapMainState->external : 0;
}
}
