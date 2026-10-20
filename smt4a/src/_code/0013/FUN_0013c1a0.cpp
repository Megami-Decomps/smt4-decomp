#include "shard/JobWork.h"

extern "C" {

void FUN_001800b8(void *buffer);
void asdMemFree(void *memory);
extern u32 DAT_0057f65c;

/* Frees the job work area's four buffers and the area itself, and clears the global that referred to it. */
void FUN_0013c1a0(void)
{
    JobWork *work = jobGetWork();

    FUN_001800b8(work->bufferA);
    FUN_001800b8(work->surface);
    FUN_001800b8(work->bufferB);
    FUN_001800b8(work->bufferC);
    asdMemFree(work);
    DAT_0057f65c = 0;
}

} /* extern "C" */
