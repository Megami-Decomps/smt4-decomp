#include "shard/NaviMain.h"

extern "C" {

int naviSetMapSlot(u32 *block, u32 a, int b, int c, int d, int e, int f, int g, int h);

void FUN_002eb1a4(u32 a)
{
    if (g_naviMain == NULL) {
        return;
    }
    naviSetMapSlot(g_naviMain->unk00040, a, 0, 0, 0, 0, 0, 0, 0);
}

} /* extern "C" */
