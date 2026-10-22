#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

int objSetFlagAndStartTimer(u32 *block);

void naviMainStartStateTimer(void)
{
    if (g_naviMain != NULL) {
        objSetFlagAndStartTimer(g_naviMain->state);
        return;
    }
}

} /* extern "C" */
