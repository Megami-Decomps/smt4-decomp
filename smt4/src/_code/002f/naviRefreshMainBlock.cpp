#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

int FUN_0039c2d4(u32 *block);

void naviRefreshMainBlock(void)
{
    if (g_naviMain != NULL) {
        FUN_0039c2d4(g_naviMain->state);
        return;
    }
}

} /* extern "C" */
