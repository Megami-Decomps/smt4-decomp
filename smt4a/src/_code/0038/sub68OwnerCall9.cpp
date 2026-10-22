#include "shard/NaviMain.h"
#include "shard/Shard0038.h"

extern "C" {
extern NaviMainA *g_naviMain;

extern s32 listScreenOpen(u8 *sub);

void sub68OwnerCall9(void)
{
    if (g_naviMain != NULL) {
        listScreenOpen(g_naviMain->panel);
    }
}

} /* extern "C" */
