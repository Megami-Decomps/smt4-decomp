#include "map/lmapMain.h"

extern "C" {

void FUN_00266a2c(void);

extern LmapMainState *g_lmapMainState;

void lmapMainCallIfActive(void)
{
    if (g_lmapMainState != NULL) {
        FUN_00266a2c();
    }
}

} /* extern "C" */
