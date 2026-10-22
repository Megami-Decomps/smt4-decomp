#include "shard/NaviMain.h"

/* Ask the live navigation screen to close. */
extern "C" void naviRequestClose(void)
{
    if (g_naviMain != NULL)
        g_naviMain->closeRequested = true;
}
