#include "map/lmapMain.h"

extern "C" {

void lmapUpdateMapBgm(void);

extern LmapMainState *g_lmapMainState;

void lmapMainCallIfActive(void)
{
    if (g_lmapMainState != NULL) {
        lmapUpdateMapBgm();
    }
}

} /* extern "C" */
