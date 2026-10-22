#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMainA *g_naviMain;

void uiSpriteGroupInitialize(u32 *request);

void naviMainReleaseRequest(void)
{
    if (g_naviMain != NULL) {
        uiSpriteGroupInitialize(g_naviMain->request);
    }
}

} /* extern "C" */
