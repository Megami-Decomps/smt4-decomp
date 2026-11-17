#include "map/LmapMainGlobals.h"

extern "C" {

void FUN_00308d3c(void);


void lmapMainCallIfActive2(void)
{
    if (g_lmapMainState != NULL) {
        FUN_00308d3c();
    }
}

} /* extern "C" */
