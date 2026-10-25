/* NON_MATCHING: Capture-flag predication and the shared work-base address calculation differ. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "Model/MoriModelShadowMap.h"
#include "shard/JobWork.h"

extern "C" {
s32 stateValuesGetBySelector(u32 selector);
s32 FUN_00154edc(s32 mode, CaptureSurfacePrefixA *surface);
s32 surfaceCopy(CaptureSurfacePrefixA *destination, CaptureSurfacePrefixA *source);

u32 FUN_0013ef3c(u32 process)
{
    SurfaceCaptureWorkPrefixA *work = (SurfaceCaptureWorkPrefixA *)jobGetWork(process);

    if (stateValuesGetBySelector(0) != 0) {
        work->captureSuppressed = 1;
    } else if (work->captureRequested != 0 &&
               work->captureComplete == 0 &&
               work->captureSuppressed == 0 &&
               work->captureBlocked == 0) {
        FUN_00157558(g_renderCtx);
        work->surface->width = 512;
        work->surface->height = 512;
        work->captureResult = static_cast<u8>(FUN_00154edc(0, work->surface));
        surfaceCopy(work->surface, work->surface);
        work->surface->width >>= 1;
        work->surface->height >>= 1;
        work->captureComplete = 1;
    }
    return 0;
}
}
