#include "shard/Shard003C.h"

extern "C" {

extern Sub68Owner *g_naviMain;
extern s32 FUN_002bf18c(u8 *sub, u32 value);

void sub68OwnerCall11(u32 value)
{
    if (g_naviMain != NULL) {
        FUN_002bf18c(g_naviMain->sub, value);
    }
}

} /* extern "C" */
