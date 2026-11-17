/* NON_MATCHING: the gates now match (signed blocked byte gives the shared 0x1400 base); remaining: retail zeroes r0 on the blocked exit (movne r0, #0) and branches past the final `mov r0, #0`, which it schedules before the pending store, and one height copy swaps r0/r1. */
#include "frame_tex/FrameTexA.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {
u8 gxCopyFramebufferToSurface(u32, AsdTexture *);
s32 stateValuesGetBySelector(u32);
void surfaceCopy(AsdTexture *, AsdTexture *);

/* "HDRCL" capture: captures the left screen into the scene texture and builds its downsampled copies
 * (through the half and quarter textures when the chain exists). */
s32 renderSurfaceDownsampleJob(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);
    work->hdr.capturedLeft = 0;
    if (work->hdr.enabled && work->hdr.ready && work->sceneSurface && !work->captureBlocked) {
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        work->sceneSurface->dimensions.width = 512;
        work->sceneSurface->dimensions.height = 512;
        work->hdr.captureResult = gxCopyFramebufferToSurface(0, work->sceneSurface);
        s32 mode = stateValuesGetBySelector(0);
        s32 levels = work->hdr.levels;
        if (!mode && levels > 1) {
            --levels;
            if (levels < 1)
                levels = 1;
        }
        if (work->hdrDownsampleChain) {
            for (s32 i = 0; i < levels; ++i) {
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
            for (s32 i = 0; i < levels; ++i) {
                surfaceCopy(work->sceneSurface, work->sceneSurface);
                work->sceneSurface->dimensions.width >>= 1;
                work->sceneSurface->dimensions.height >>= 1;
            }
        }
        work->hdr.capturedLeft = 1;
        work->hdr.capturedRight = 0;
    }
    return 0;
}
}
