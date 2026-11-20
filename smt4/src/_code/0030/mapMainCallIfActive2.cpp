#include "map/mapMain.h"

extern "C" {

void naviMainTryEnterState6(void);

extern MapMain *g_mapMain;

void mapMainCallIfActive2(void)
{
    if (g_mapMain != NULL) {
        naviMainTryEnterState6();
    }
}

} /* extern "C" */
