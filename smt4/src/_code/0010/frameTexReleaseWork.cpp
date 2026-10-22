#include "ui/FrameTex.h"

extern "C" {

FrameWork *jobGetWork(void);
int asdTextureRelease(void *resource);
int asdMemFree(void *ptr);

extern FrameWork *g_frameTex;

/* Releases the four resources held by the job's work area, then the work area itself. */
void frameTexReleaseWork(void)
{
    FrameWork *work = jobGetWork();

    asdTextureRelease(work->bufferA);
    asdTextureRelease(work->surface);
    asdTextureRelease(work->bufferB);
    asdTextureRelease(work->bufferC);
    asdMemFree(work);
    g_frameTex = NULL;
}

} /* extern "C" */
