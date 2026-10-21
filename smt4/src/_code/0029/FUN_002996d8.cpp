/* NON_MATCHING: two retail hint NOPs and its shared pre-else tail block are not reproduced; float constant-load order also differs. */
#include "shard/GameGlobals.h"

extern "C" {
void FUN_00294d6c(void);
void statusCameraSetEye(f32 x, f32 y, f32 z);
void statusCameraApply(void);

void FUN_002996d8(s32 usePreset)
{
    u32 mode = g_gameGlobals.data->unk1E67;
    if (mode != 3 && mode != 9) {
        return;
    }
    if (usePreset != 0) {
        FUN_00294d6c();
    } else {
        statusCameraSetEye(mode == 9 ? 125.0f : 100.0f, 6.3f, 4.5f);
    }
    statusCameraApply();
}
}
