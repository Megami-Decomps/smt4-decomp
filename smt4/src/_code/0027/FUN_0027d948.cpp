#include "shard/NaviMain.h"

extern "C" {

int objectBlockClear(u32 *block);

void FUN_0027d948(void)
{
    if (g_naviMain != NULL) {
        objectBlockClear(g_naviMain->unk00040);
    }
}

} /* extern "C" */
