#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "common.h"

extern "C" {

void naviSetDisplayFlag(u32 *request, s32 value);

void naviMainSetRequestValue(s32 value)
{
    if (g_naviMain != NULL) {
        naviSetDisplayFlag(g_naviMain->request, value);
    }
}

} /* extern "C" */
