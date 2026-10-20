#include "map/lmapMain.h"

extern "C" {

extern LmapMainStateA *g_lmapMainState;

/* True when unkC8, read as float bits, is at least 0.5. */
bool lmapMainIsAtLeastHalf(void)
{
    if (g_lmapMainState->unkC8 < 0x3F000000) {
        return false;
    }
    return true;
}

} /* extern "C" */
