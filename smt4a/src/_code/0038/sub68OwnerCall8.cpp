#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0038.h"

extern "C" {

extern s32 stateSetterSetState16(u8 *sub);

void sub68OwnerCall8(void)
{
    if (g_naviMain != NULL) {
        stateSetterSetState16(g_naviMain->panel);
    }
}

} /* extern "C" */
