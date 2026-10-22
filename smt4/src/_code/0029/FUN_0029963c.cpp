/* NON_MATCHING: switch branches and the post-call global reload/store order differ. */
#include "shard/GameGlobals.h"

extern "C" {
void FUN_002945a4(u32 resource, u32 mode, u32 value, u32 flags);

void FUN_0029963c(s32 mode, u32 value)
{
    switch (mode) {
    case 0:
        FUN_002945a4(g_gameGlobals.data->unk1E80, 0, value, 7);
        break;
    case 1:
        FUN_002945a4(g_gameGlobals.data->unk1E80, 1, value, 7);
        break;
    case 2:
        FUN_002945a4(g_gameGlobals.data->unk1E80, 2, value, 7);
        break;
    }
    g_gameGlobals.data->unk10 = 0;
    g_gameGlobals.data->activeState = 6;
}
}
