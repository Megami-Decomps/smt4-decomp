#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

int naviMainEnterState6(u32 *block);

void naviMainTryEnterState6(void)
{
    if (g_naviMain != NULL) {
        naviMainEnterState6(g_naviMain->state);
        return;
    }
}

} /* extern "C" */
