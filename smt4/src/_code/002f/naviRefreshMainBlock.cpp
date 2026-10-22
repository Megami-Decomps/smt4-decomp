#include "shard/NaviMain.h"

extern "C" {

int FUN_0039c2d4(u32 *block);

void naviRefreshMainBlock(void)
{
    if (g_naviMain != NULL) {
        FUN_0039c2d4(g_naviMain->unk00040);
        return;
    }
}

} /* extern "C" */
