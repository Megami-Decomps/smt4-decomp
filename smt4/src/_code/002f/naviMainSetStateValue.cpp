#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMain *g_naviMain;

void FUN_0039c064(u32 *state, s32 value);

/* Updates the navigation state when its owner exists. */
void naviMainSetStateValue(s32 value)
{
    if (g_naviMain != NULL) {
        FUN_0039c064(g_naviMain->state, value);
    }
}
}
