#include "ui/UiSpriteApi.h"
#include "frame_tex/FrameTex.h"

extern "C" {

int asdTextureRelease(void *resource);
int asdMemFree(void *ptr);

/* Releases the four capture textures held by the job's work area, then the work area itself. */
void frameTexReleaseWork(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    asdTextureRelease(work->surfaceLeft);
    asdTextureRelease(work->surfaceRight);
    asdTextureRelease(work->zanSurfaceLeft);
    asdTextureRelease(work->zanSurfaceRight);
    asdMemFree(work);
    g_frameTex = NULL;
}

} /* extern "C" */
