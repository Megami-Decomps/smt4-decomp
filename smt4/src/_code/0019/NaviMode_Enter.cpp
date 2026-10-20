#include "shard/NaviMain.h"

extern "C" {

int FUN_00399b30(u32 *block);
int FUN_0039bbd4(u32 *block);
int FUN_003c28a8(u8 *block, int value);
int NaviMain_Start(int a, int b);

void NaviMode_Enter(void)
{
    NaviMain *navi;

    NaviMain_Start(1, 0);
    navi = DAT_0044cdf0;
    if (DAT_0044cdf0 != NULL) {
        FUN_003c28a8(navi->unk12334, 8);
        FUN_00399b30(navi->unk00040);
        FUN_0039bbd4(navi->unk00040);
    }
    navi = DAT_0044cdf0;
    navi->active = 1;
}

} /* extern "C" */
