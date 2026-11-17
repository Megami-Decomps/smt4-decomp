#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "common.h"

extern "C" {

void naviMainSelectCategoryAndRefresh(u32 *state, s32 value);

/* Updates the navigation state when its owner exists. */
void naviMainSetStateValue(s32 value)
{
    if (g_naviMain != NULL) {
        naviMainSelectCategoryAndRefresh(g_naviMain->state, value);
    }
}
}
