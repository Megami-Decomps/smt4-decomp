#include "map/lmapMain.h"

extern "C" {

extern LmapMainState *g_lmapMainState;

u32 lmapMainGetUnkCC(void)
{
    return g_lmapMainState->unkCC;
}

} /* extern "C" */
