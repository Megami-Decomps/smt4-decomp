#include "map/lmapMain.h"

extern "C" {

void FUN_00308d3c(void);

extern LmapMainState *g_lmapMainState;

void lmapMainCallIfActive2(void)
{
    if (g_lmapMainState != NULL) {
        FUN_00308d3c();
    }
}

} /* extern "C" */
