#include "common.h"

extern "C" {

struct NaviMain {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u32 request;
};
extern NaviMain *g_naviMain;
void FUN_0048ccdc(u32 *request);

void naviMainReleaseRequest(void)
{
    if (g_naviMain != NULL) {
        FUN_0048ccdc(&g_naviMain->request);
    }
}

} /* extern "C" */
