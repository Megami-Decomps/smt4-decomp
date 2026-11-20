#include "map/LmapMainGlobals.h"

extern "C" {

void naviMainTryEnterState6(void);


void lmapMainCallIfActive2(void)
{
    if (g_lmapMainState != NULL) {
        naviMainTryEnterState6();
    }
}

} /* extern "C" */
