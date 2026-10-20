#include "shard/Shard0031.h"

extern "C" {

extern Sub68Owner *g_naviMain;
extern s32 stateSetterFlagsClear(u8 *sub);

void sub68OwnerCall1(void)
{
    if (g_naviMain != NULL) {
        stateSetterFlagsClear(g_naviMain->sub);
    }
}

} /* extern "C" */
