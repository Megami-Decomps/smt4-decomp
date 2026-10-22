#include "shard/NaviMain.h"

extern "C" {

int NaviMain_EnterState1(u32 *block);
int backgroundConsumeReset(u32 *block);
int FUN_003c28a8(u8 *block, int value);
int NaviMain_Start(int a, int b);

void NaviMode_Enter(void)
{
    NaviMain *navi;

    NaviMain_Start(1, 0);
    navi = g_naviMain;
    if (g_naviMain != NULL) {
        FUN_003c28a8(navi->unk12334, 8);
        NaviMain_EnterState1(navi->unk00040);
        backgroundConsumeReset(navi->unk00040);
    }
    navi = g_naviMain;
    navi->active = 1;
}

} /* extern "C" */
