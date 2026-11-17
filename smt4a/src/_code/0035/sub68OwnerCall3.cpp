#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0035.h"

extern "C" {

extern s32 stateSetterSetState5(u8 *sub);

void sub68OwnerCall3(void)
{
    if (g_naviMain != NULL) {
        stateSetterSetState5(g_naviMain->panel);
    }
}

} /* extern "C" */
