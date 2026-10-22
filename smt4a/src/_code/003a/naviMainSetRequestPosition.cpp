#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMainA *g_naviMain;

void menuRequestActivate(u32 *request, s32 mode, s32 x, s32 y);

void naviMainSetRequestPosition(f32 x, f32 y)
{
    if (g_naviMain != NULL) {
        menuRequestActivate(g_naviMain->request, 0, (s32)x, (s32)y);
    }
}

} /* extern "C" */
