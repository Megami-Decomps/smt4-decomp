#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

int naviMainEnterState6(u32 *block);

void FUN_00308d3c(void)
{
    if (g_naviMain != NULL) {
        naviMainEnterState6(g_naviMain->state);
        return;
    }
}

} /* extern "C" */
