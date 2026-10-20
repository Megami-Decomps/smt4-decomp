#include "shard/NaviMain.h"

extern "C" {

int FUN_0039bcf8(u32 *block);

void FUN_0027d948(void)
{
    if (g_naviMain != NULL) {
        FUN_0039bcf8(g_naviMain->unk00040);
    }
}

} /* extern "C" */
