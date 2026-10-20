#include "shard/Shard003C.h"

extern "C" {

extern Sub68Owner *g_naviMain;
extern s32 sub20634Reset(u8 *sub);

void sub68OwnerCall10(void)
{
    if (g_naviMain != NULL) {
        sub20634Reset(g_naviMain->sub);
    }
}

} /* extern "C" */
