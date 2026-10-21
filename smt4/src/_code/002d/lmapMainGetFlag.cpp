#include "common.h"

struct MapState { u8 padding[0xb]; s8 flag; };

extern "C" {
/* Reads or computes the requested value. */
extern MapState *g_lmapMainState;
s32 lmapMainGetFlag(void)
{
    return g_lmapMainState != NULL ? g_lmapMainState->flag : 0;
}
}
