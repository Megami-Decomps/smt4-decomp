#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

int objectBlockClear(u32 *block);

void naviClearObjectBlock(void)
{
    if (g_naviMain != NULL) {
        objectBlockClear(g_naviMain->state);
    }
}

} /* extern "C" */
