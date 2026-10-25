#include "ui/FrameTex.h"
#include "shard/JobWork.h"

extern "C" {

void asdTextureRelease(void *buffer);
void asdMemFree(void *memory);
extern FrameWorkA *g_frameTex;

/* Frees the job work area's four buffers and the area itself, and clears the global that referred to it. */
void frameTexReleaseWork(u32 job)
{
    JobWork *work = jobGetWork(job);

    asdTextureRelease(work->bufferA);
    asdTextureRelease(work->surface);
    asdTextureRelease(work->bufferB);
    asdTextureRelease(work->bufferC);
    asdMemFree(work);
    g_frameTex = NULL;
}

} /* extern "C" */
