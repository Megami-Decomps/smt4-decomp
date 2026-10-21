#include "common.h"

extern "C" {

struct NaviMain { u8 unk00[0x68]; u32 request; };
extern NaviMain *g_naviMain;
void FUN_00491c2c(u32 *request, s32 mode, s32 x, s32 y);

void naviMainSetRequestPosition(f32 x, f32 y)
{
    if (g_naviMain != NULL) {
        FUN_00491c2c(&g_naviMain->request, 0, (s32)x, (s32)y);
    }
}

} /* extern "C" */
