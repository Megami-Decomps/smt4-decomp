#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

int NaviMain_EnterState4(u32 *block);

void FUN_00275bc8(void)
{
    if (g_naviMain != NULL) {
        NaviMain_EnterState4(g_naviMain->state);
    }
}

} /* extern "C" */
