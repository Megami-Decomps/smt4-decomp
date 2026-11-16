#include "map/lmapMain.h"

extern "C" {

void lmapUpdateMapBgm(void);

extern LmapMainStateA *g_lmapMainState;

void lmapMainCallIfActive(void)
{
    if (g_lmapMainState != NULL) {
        lmapUpdateMapBgm();
    }
}

} /* extern "C" */
