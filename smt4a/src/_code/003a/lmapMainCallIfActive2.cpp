#include "map/lmapMain.h"

extern "C" {

void naviMainEnterState6IfActive(void);

extern LmapMainStateA *g_lmapMainState;

void lmapMainCallIfActive2(void)
{
    if (g_lmapMainState != NULL) {
        naviMainEnterState6IfActive();
    }
}

} /* extern "C" */
