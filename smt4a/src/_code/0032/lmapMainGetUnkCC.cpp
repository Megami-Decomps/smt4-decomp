#include "map/LmapMainGlobals.h"

extern "C" {


u32 lmapMainGetUnkCC(void)
{
    return g_lmapMainState->state;
}

} /* extern "C" */
