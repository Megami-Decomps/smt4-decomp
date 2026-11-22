/* NON_MATCHING: only scheduling differs: retail loads the pooled callback into r1 after the `g_freeCamera` store, the build loads it into r2 first. */
#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "gfx/FreeCamera.h"

extern "C" {
s32 freeCameraProcessUpdate(u32 handle);

void freeCameraCreate(u32 mode)
{
    g_freeCamera = static_cast<FreeCameraWork*>(asdOperatorNew(sizeof(FreeCameraWork)));
    FreeCameraWork* work = g_freeCamera;
    u32 process = asdProcessCreateSimple("FreeCamera PROC", 4, 0, 0, freeCameraProcessUpdate, 0, 0);
    work->process = process;
    work->mode = mode;
    work->active = 0;
    work->flag9 = 0;
    work->value = 0.0f;
}
}
