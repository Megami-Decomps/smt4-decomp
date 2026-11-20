#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

int naviMainResetBlock(u32 *block);

void naviRefreshMainBlock(void)
{
    if (g_naviMain != NULL) {
        naviMainResetBlock(g_naviMain->state);
        return;
    }
}

} /* extern "C" */
