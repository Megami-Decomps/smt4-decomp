#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0036.h"

extern "C" {

extern s32 stateSetterSetState15(u8 *sub);

void sub68OwnerCall6(void)
{
    if (g_naviMain != NULL) {
        stateSetterSetState15(g_naviMain->panel);
    }
}

} /* extern "C" */
