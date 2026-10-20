#include "shard/Shard0036.h"

extern "C" {

extern Sub68Owner *g_naviMain;
extern s32 stateSetterSetState15(u8 *sub);

void sub68OwnerCall6(void)
{
    if (g_naviMain != NULL) {
        stateSetterSetState15(g_naviMain->sub);
    }
}

} /* extern "C" */
