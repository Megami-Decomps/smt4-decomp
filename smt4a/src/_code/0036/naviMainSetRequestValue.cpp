#include "common.h"

extern "C" {

struct NaviMain { u8 unk00[0x68]; u32 request; };
extern NaviMain *g_naviMain;
void naviSetDisplayFlag(u32 *request, s32 value);

void naviMainSetRequestValue(s32 value)
{
    if (g_naviMain != NULL) {
        naviSetDisplayFlag(&g_naviMain->request, value);
    }
}

} /* extern "C" */
