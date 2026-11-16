/* NON_MATCHING: only scheduling differs: retail loads the pooled callback into r1 after the `g_freeCamera` store, the build loads it into r2 first. */
#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

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

void FUN_00348c50(u32 mode)
{
    g_freeCamera = static_cast<FreeCameraWork*>(asdOperatorNew(sizeof(FreeCameraWork)));
    FreeCameraWork* work = g_freeCamera;
    u32 process = asdProcessCreateSimple("FreeCamera PROC", 4, 0, 0, freeCameraProcessUpdate, 0, 0);
    work->process = process;
    work->mode = mode;
    work->flag8 = 0;
    work->flag9 = 0;
    work->value = 0.0f;
}
}
