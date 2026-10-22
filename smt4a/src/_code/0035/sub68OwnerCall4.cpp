#include "shard/NaviMain.h"
#include "shard/Shard0035.h"

extern "C" {
extern NaviMainA *g_naviMain;

extern s32 block66OwnerClear(u8 *sub);

void sub68OwnerCall4(void)
{
    if (g_naviMain != NULL) {
        block66OwnerClear(g_naviMain->panel);
    }
}

} /* extern "C" */
