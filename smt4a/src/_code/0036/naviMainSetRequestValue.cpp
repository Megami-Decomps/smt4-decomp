#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMainA *g_naviMain;

void naviSetDisplayFlag(u32 *request, s32 value);

void naviMainSetRequestValue(s32 value)
{
    if (g_naviMain != NULL) {
        naviSetDisplayFlag(g_naviMain->request, value);
    }
}

} /* extern "C" */
