#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0036.h"

extern "C" {

extern s32 block12DCOwnerStart6(u8 *sub);

void sub68OwnerCall7(void)
{
    if (g_naviMain != NULL) {
        block12DCOwnerStart6(g_naviMain->panel);
    }
}

} /* extern "C" */
