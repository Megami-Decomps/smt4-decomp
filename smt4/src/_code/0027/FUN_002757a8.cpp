#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

int NaviMain_EnterState5(u32 *block);

void FUN_002757a8(void)
{
    if (g_naviMain != NULL) {
        NaviMain_EnterState5(g_naviMain->state);
    }
}

} /* extern "C" */
