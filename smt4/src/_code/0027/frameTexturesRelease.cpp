/* NON_MATCHING: retail materializes a zero for the HDR enable byte and copies it into a saved register for the texture clears; the build uses the saved register directly. */
#include "frame_tex/FrameTex.h"
#include "shard/W6_W6Match2_TextureHolder.h"

extern "C" {

/* Disables HDR and releases the scene capture and its two downsample textures. */
void frameTexturesRelease(void)
{
    FrameTexWork *work = g_frameTex;
    work->hdr.enabled = 0;
    if (work->sceneSurface != NULL) {
        asdTextureRelease(work->sceneSurface);
        work->sceneSurface = NULL;
    }
    if (work->hdrSurfaceQuarter != NULL) {
        asdTextureRelease(work->hdrSurfaceQuarter);
        work->hdrSurfaceQuarter = NULL;
    }
    if (work->hdrSurfaceHalf != NULL) {
        asdTextureRelease(work->hdrSurfaceHalf);
        work->hdrSurfaceHalf = NULL;
    }
}

} /* extern "C" */
