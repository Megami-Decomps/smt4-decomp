#include "shard/Shard0031.h"

extern "C" {

extern Sub68Owner *g_naviMain;
extern s32 stateSetterIsState4Or6Or16(u8 *sub);

void sub68OwnerCall2(void)
{
    if (g_naviMain != NULL) {
        stateSetterIsState4Or6Or16(g_naviMain->sub);
    }
}

} /* extern "C" */
