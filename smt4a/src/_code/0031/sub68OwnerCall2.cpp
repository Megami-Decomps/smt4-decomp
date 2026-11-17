#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0031.h"

extern "C" {

extern s32 stateSetterIsState4Or6Or16(u8 *sub);

void sub68OwnerCall2(void)
{
    if (g_naviMain != NULL) {
        stateSetterIsState4Or6Or16(g_naviMain->panel);
    }
}

} /* extern "C" */
