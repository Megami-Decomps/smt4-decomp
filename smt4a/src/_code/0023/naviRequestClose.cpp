#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

void naviRequestClose(void)
{
    if (g_naviMain != NULL) {
        g_naviMain->closeRequested = 1;
    }
}

} /* extern "C" */
