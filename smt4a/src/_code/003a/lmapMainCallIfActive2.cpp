#include "map/lmapMain.h"

extern "C" {

void FUN_00398464(void);

extern LmapMainStateA *g_lmapMainState;

void lmapMainCallIfActive2(void)
{
    if (g_lmapMainState != NULL) {
        FUN_00398464();
    }
}

} /* extern "C" */
