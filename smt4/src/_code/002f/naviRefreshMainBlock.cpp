#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

int FUN_0039c2d4(u32 *block);

void naviRefreshMainBlock(void)
{
    if (g_naviMain != NULL) {
        FUN_0039c2d4(g_naviMain->state);
        return;
    }
}

} /* extern "C" */
