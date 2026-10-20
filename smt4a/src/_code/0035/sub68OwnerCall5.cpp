#include "shard/Shard0035.h"

extern "C" {

extern Sub68Owner *g_naviMain;
extern s32 block3E6OwnerClear(u8 *sub);

void sub68OwnerCall5(void)
{
    if (g_naviMain != NULL) {
        block3E6OwnerClear(g_naviMain->sub);
    }
}

} /* extern "C" */
