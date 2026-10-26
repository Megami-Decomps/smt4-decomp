#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "Model/MoriModelShadowMap.h"
#include "shard/JobWork.h"

/* The capture flags at work+0x1400, read as one block. */
struct CaptureFlagsView {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 requested;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u8 complete;
    /* 0x19 */ u8 suppressed;
    /* 0x1A */ u8 unk1A[0x33];
    /* 0x4D */ u8 blocked;
};

static __inline bool captureReady(const CaptureFlagsView *flags)
{
    return flags->requested != 0 && flags->complete == 0 && flags->suppressed == 0 && flags->blocked == 0;
}

extern "C" {
s32 stateValuesGetBySelector(u32 selector);
s32 FUN_00154edc(s32 mode, CaptureSurfacePrefixA *surface);
s32 surfaceCopy(CaptureSurfacePrefixA *destination, CaptureSurfacePrefixA *source);

u32 surfaceCaptureUpdate(u32 process)
{
    SurfaceCaptureWorkPrefixA *work = (SurfaceCaptureWorkPrefixA *)jobGetWork(process);

    if (stateValuesGetBySelector(0) != 0) {
        work->captureSuppressed = 1;
    } else if (captureReady(reinterpret_cast<const CaptureFlagsView *>(reinterpret_cast<u8 *>(work) + 0x1400))) {
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
