/* NON_MATCHING: callback now freeCameraProcessUpdate with real process types; retail picks r1 for the pooled callback temp and copies the process id through r1 before the stm, built uses r0. */
#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct FreeCameraWork {
    u32 process;
    u32 mode;
    u8 flag8;
    u8 flag9;
    u8 unk0a[2];
    f32 value;
    u32* output;
};

extern "C" {
extern FreeCameraWork* g_freeCamera;
s32 freeCameraProcessUpdate(u32 handle);
void* asdOperatorNew(u32 size);

void FUN_00348c50(u32 mode)
{
    FreeCameraWork* work = static_cast<FreeCameraWork*>(asdOperatorNew(sizeof(FreeCameraWork)));
    g_freeCamera = work;
    u32 process = asdProcessCreateSimple("FreeCamera PROC", 4, 0, 0, freeCameraProcessUpdate, 0, 0);
    work->process = process;
    work->mode = mode;
    work->flag8 = 0;
    work->flag9 = 0;
    work->value = 0.0f;
}
}
