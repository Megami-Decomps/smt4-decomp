#include "shard/NaviMain.h"

extern "C" {

int objSetFlagAndStartTimer(u32 *block);

void FUN_002eb184(void)
{
    if (g_naviMain != NULL) {
        objSetFlagAndStartTimer(g_naviMain->unk00040);
        return;
    }
}

} /* extern "C" */
