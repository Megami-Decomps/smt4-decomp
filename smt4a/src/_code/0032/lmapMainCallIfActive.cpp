#include "map/LmapMainGlobals.h"

extern "C" {

void lmapUpdateMapBgm(void);


void lmapMainCallIfActive(void)
{
    if (g_lmapMainState != NULL) {
        lmapUpdateMapBgm();
    }
}

} /* extern "C" */
