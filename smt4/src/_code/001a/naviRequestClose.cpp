#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

/* Ask the live navigation screen to close. */
extern "C" void naviRequestClose(u32 handle)
{
    if (g_naviMain != NULL)
        g_naviMain->closeRequested = true;
}
