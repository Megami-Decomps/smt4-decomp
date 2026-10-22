#include "shard/NaviMain.h"
#include "shard/Shard0036.h"

extern "C" {
extern NaviMainA *g_naviMain;

extern void FUN_004883c8(u8 *sub, u32 value, s32 a, s32 b, s32 c, u16 d, u32 e, u16 f, s32 g);

void sub68OwnerStart2(u32 value)
{
    if (g_naviMain != NULL) {
        FUN_004883c8(g_naviMain->panel, value, 0, 0, 0, 0, 0, 0, 0);
    }
}

} /* extern "C" */
