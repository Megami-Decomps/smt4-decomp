#include "map/LmapMainGlobals.h"

extern "C" {

void naviMainEnterState6IfActive(void);


void lmapMainCallIfActive2(void)
{
    if (g_lmapMainState != NULL) {
        naviMainEnterState6IfActive();
    }
}

} /* extern "C" */
