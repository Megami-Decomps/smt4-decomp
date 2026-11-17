/* NON_MATCHING: only the first downsample level's two dimension copies (and the second level's height copy) load the source pointer into r1 and the destination into r0, where retail uses r0/r1; FUN_0010854c is the same job with the opposite tie-break. */
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

s32 stateValuesGetBySelector(u32 arg);
s32 FUN_002bfadc(u32 arg, AsdTexture *surface);
void surfaceCopy(AsdTexture *src, AsdTexture *dst);


/* Builds the successive half-size copies of the work's source surface (a chain through two further surfaces when the downsample chain exists). */
s32 FUN_0010835c(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);
    work->hdr.capturedLeft = 0;
    if (work->hdr.enabled == 0) {
        return 0;
    }
    if (work->hdr.ready == 0) {
        return 0;
    }
    if (work->sceneSurface == NULL) {
        return 0;
    }
    if (work->captureBlocked != 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(reinterpret_cast<RenderCtx *>(g_titleScene));
    work->sceneSurface->dimensions.width = 0x200;
    work->sceneSurface->dimensions.height = 0x200;
    work->hdr.captureResult = FUN_002bfadc(0, work->sceneSurface);
    s32 skipped = stateValuesGetBySelector(0);
    s32 levels = work->hdr.levels;
    if (skipped == 0 && levels > 1) {
        levels--;
        if (levels < 1) {
            levels = 1;
        }
    }
    if (work->hdrDownsampleChain != 0) {
        for (s32 i = 0; i < levels; i++) {
            if (i == 0) {
                surfaceCopy(work->sceneSurface, work->hdrSurfaceHalf);
                work->hdrSurfaceHalf->dimensions.width = work->sceneSurface->dimensions.width >> 1;
                work->hdrSurfaceHalf->dimensions.height = work->sceneSurface->dimensions.height >> 1;
            } else if (i == 1) {
                surfaceCopy(work->hdrSurfaceHalf, work->hdrSurfaceQuarter);
                work->hdrSurfaceQuarter->dimensions.width = work->hdrSurfaceHalf->dimensions.width >> 1;
                work->hdrSurfaceQuarter->dimensions.height = work->hdrSurfaceHalf->dimensions.height >> 1;
            } else {
                surfaceCopy(work->hdrSurfaceQuarter, work->hdrSurfaceQuarter);
                work->hdrSurfaceQuarter->dimensions.width >>= 1;
                work->hdrSurfaceQuarter->dimensions.height >>= 1;
            }
        }
    } else {
        for (s32 i = 0; i < levels; i++) {
            surfaceCopy(work->sceneSurface, work->sceneSurface);
            work->sceneSurface->dimensions.width >>= 1;
            work->sceneSurface->dimensions.height >>= 1;
        }
    }
    work->hdr.capturedLeft = 1;
    work->hdr.capturedRight = 0;
    return 0;
}

} /* extern "C" */
