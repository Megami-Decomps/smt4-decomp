#include "shard/JobWork.h"

extern "C" {

void asdTextureRelease(void *buffer);
void asdMemFree(void *memory);
extern u32 g_frameTex;

/* Frees the job work area's four buffers and the area itself, and clears the global that referred to it. */
void FUN_0013c1a0(void)
{
    JobWork *work = jobGetWork();

    asdTextureRelease(work->bufferA);
    asdTextureRelease(work->surface);
    asdTextureRelease(work->bufferB);
    asdTextureRelease(work->bufferC);
    asdMemFree(work);
    g_frameTex = 0;
}

} /* extern "C" */
