#include "shard/NaviMain.h"

extern "C" {

int objectBlockClear(u32 *block);

void naviClearObjectBlock(void)
{
    if (g_naviMain != NULL) {
        objectBlockClear(g_naviMain->unk00040);
    }
}

} /* extern "C" */
