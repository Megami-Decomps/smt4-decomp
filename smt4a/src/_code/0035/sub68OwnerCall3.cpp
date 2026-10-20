#include "shard/Shard0035.h"

extern "C" {

extern Sub68Owner *g_naviMain;
extern s32 stateSetterSetState5(u8 *sub);

void sub68OwnerCall3(void)
{
    if (g_naviMain != NULL) {
        stateSetterSetState5(g_naviMain->sub);
    }
}

} /* extern "C" */
