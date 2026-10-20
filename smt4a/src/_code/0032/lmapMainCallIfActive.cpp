#include "map/lmapMain.h"

extern "C" {

void FUN_002df914(void);

extern LmapMainStateA *g_lmapMainState;

void lmapMainCallIfActive(void)
{
    if (g_lmapMainState != NULL) {
        FUN_002df914();
    }
}

} /* extern "C" */
