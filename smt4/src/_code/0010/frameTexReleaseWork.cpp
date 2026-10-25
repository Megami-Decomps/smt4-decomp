#include "ui/FrameTex.h"
#include "shard/JobWork.h"

extern "C" {

int asdTextureRelease(void *resource);
int asdMemFree(void *ptr);

extern FrameWork *g_frameTex;

/* Releases the four resources held by the job's work area, then the work area itself. */
void frameTexReleaseWork(u32 job)
{
    FrameWork *work = (FrameWork *)jobGetWork(job);

    asdTextureRelease(work->bufferA);
    asdTextureRelease(work->surface);
    asdTextureRelease(work->bufferB);
    asdTextureRelease(work->bufferC);
    asdMemFree(work);
    g_frameTex = NULL;
}

} /* extern "C" */
