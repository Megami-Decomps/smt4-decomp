#include "shard/NaviMain.h"
extern "C" NaviMain *g_naviMain;

/* Ask the live navigation screen to close. */
extern "C" void naviRequestClose(u32 handle)
{
    if (g_naviMain != NULL)
        g_naviMain->closeRequested = true;
}
