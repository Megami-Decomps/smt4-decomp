#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

int objSetFlagAndStartTimer(u32 *block);

void naviMainStartStateTimer(void)
{
    if (g_naviMain != NULL) {
        objSetFlagAndStartTimer(g_naviMain->state);
        return;
    }
}

} /* extern "C" */
