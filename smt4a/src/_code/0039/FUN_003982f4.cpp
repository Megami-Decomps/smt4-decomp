#include "map/mapMain.h"

extern "C" {

void naviMainEnterState6IfActive(void);

extern MapMainA *g_mapMain;

void FUN_003982f4(void)
{
    if (g_mapMain != NULL) {
        naviMainEnterState6IfActive();
    }
}

} /* extern "C" */
