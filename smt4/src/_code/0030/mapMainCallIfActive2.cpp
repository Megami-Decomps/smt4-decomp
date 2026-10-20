#include "map/mapMain.h"

extern "C" {

void FUN_00308d3c(void);

extern MapMain *g_mapMain;

void mapMainCallIfActive2(void)
{
    if (g_mapMain != NULL) {
        FUN_00308d3c();
    }
}

} /* extern "C" */
