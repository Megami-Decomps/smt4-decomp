#include "frame_tex/FrameTexA.h"

extern "C" {

void asdTextureRelease(void *buffer);
void asdMemFree(void *memory);

/* "HDRCL" destruction: frees the four capture textures and the work area, and clears g_frameTex. */
void frameTexReleaseWork(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    asdTextureRelease(work->surfaceLeft);
    asdTextureRelease(work->surfaceRight);
    asdTextureRelease(work->zanSurfaceLeft);
    asdTextureRelease(work->zanSurfaceRight);
    asdMemFree(work);
    g_frameTex = NULL;
}

} /* extern "C" */
