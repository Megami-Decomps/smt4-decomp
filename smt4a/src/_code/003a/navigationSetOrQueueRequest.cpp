/* Applies a navigation request now, or saves it until the navigation screen opens. */
#include "shard/NaviMain.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {
extern NaviMainA *g_naviMain;
void FUN_00490484(void *panel, u32 first, u32 third, u32 second, f32 x, f32 y);

void navigationSetOrQueueRequest(u32 first, u32 second, u32 third, f32 x, f32 y)
{
    NaviMainA *navigation = g_naviMain;
    FlagWorkBanks *flags = gameFlagsGetBlock();
    if (navigation != NULL) {
        FUN_00490484(navigation->panel, first, third, second, x, y);
        return;
    }
    /* Deferred navigation storage is beyond the shared FlagWorkBanks prefix. */
    struct DeferredNavigationView {
        u8 unk0000[0x1688];
        u32 pending;
        u32 first;
        u32 third;
        s32 x;
        s32 y;
        u32 second;
    };
    DeferredNavigationView *request = (DeferredNavigationView *)flags;
    request->pending = 1;
    request->first = first;
    request->third = third;
    request->x = (s32)x;
    request->y = (s32)y;
    request->second = second;
}
}
