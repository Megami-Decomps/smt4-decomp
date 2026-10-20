#include "map/lmapMain.h"

extern "C" {

extern LmapMainStateA *g_lmapMainState;

u32 lmapMainGetUnkCC(void)
{
    return g_lmapMainState->unkCC;
}

} /* extern "C" */
