#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard003C.h"

extern "C" {

extern s32 FUN_002bf18c(u8 *sub, u32 value);

void sub68OwnerCall11(u32 value)
{
    if (g_naviMain != NULL) {
        FUN_002bf18c(g_naviMain->panel, value);
    }
}

} /* extern "C" */
