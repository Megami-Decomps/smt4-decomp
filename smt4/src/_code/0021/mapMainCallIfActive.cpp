#include "map/mapMain.h"

extern "C" {

void FUN_0027d0ec(void);

extern MapMain *g_mapMain;

void mapMainCallIfActive(void)
{
    if (g_mapMain != NULL) {
        FUN_0027d0ec();
    }
}

} /* extern "C" */
