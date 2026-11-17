#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

int objectBlockClear(u32 *block);

void naviClearObjectBlock(void)
{
    if (g_naviMain != NULL) {
        objectBlockClear(g_naviMain->state);
    }
}

} /* extern "C" */
