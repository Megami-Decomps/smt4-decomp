#include "shard/Shard0039.h"

extern "C" {

extern u32 DAT_005710e0;
extern s32 panelStateIs0(void);
extern void FUN_004a0ef8(u32 value);

s32 FUN_0039e304(void)
{
    s32 result = panelStateIs0();

    if (result == 1) {
        FUN_004a0ef8(DAT_005710e0);
        DAT_005710e0 = 0;
    }
    return result;
}

} /* extern "C" */
