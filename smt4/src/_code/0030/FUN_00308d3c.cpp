#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

int FUN_0039c954(u32 *block);

void FUN_00308d3c(void)
{
    if (g_naviMain != NULL) {
        FUN_0039c954(g_naviMain->state);
        return;
    }
}

} /* extern "C" */
