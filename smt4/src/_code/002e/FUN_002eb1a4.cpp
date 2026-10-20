#include "shard/NaviMain.h"

extern "C" {

int FUN_0039ae38(u32 *block, u32 a, int b, int c, int d, int e, int f, int g, int h);

void FUN_002eb1a4(u32 a)
{
    if (DAT_0044cdf0 == NULL) {
        return;
    }
    FUN_0039ae38(DAT_0044cdf0->unk00040, a, 0, 0, 0, 0, 0, 0, 0);
}

} /* extern "C" */
