#include "shard/NaviMain.h"

extern "C" {
extern NaviMainA *g_naviMain;

void naviRequestClose(void)
{
    if (g_naviMain != NULL) {
        g_naviMain->closeRequested = 1;
    }
}

} /* extern "C" */
