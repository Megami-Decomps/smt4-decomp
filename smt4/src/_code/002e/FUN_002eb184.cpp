#include "shard/NaviMain.h"

extern "C" {

int FUN_0039bcdc(u32 *block);

void FUN_002eb184(void)
{
    if (g_naviMain != NULL) {
        FUN_0039bcdc(g_naviMain->unk00040);
        return;
    }
}

} /* extern "C" */
