#include "shard/NaviMain.h"

extern "C" {

int FUN_0039c954(u32 *block);

void FUN_00308d3c(void)
{
    if (g_naviMain != NULL) {
        FUN_0039c954(g_naviMain->unk00040);
        return;
    }
}

} /* extern "C" */
