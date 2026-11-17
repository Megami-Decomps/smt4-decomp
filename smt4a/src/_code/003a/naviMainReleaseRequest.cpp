#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "common.h"

extern "C" {

void uiSpriteGroupInitialize(u32 *request);

void naviMainReleaseRequest(void)
{
    if (g_naviMain != NULL) {
        uiSpriteGroupInitialize(g_naviMain->request);
    }
}

} /* extern "C" */
