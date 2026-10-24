/* NON_MATCHING: retail loads the first thread-handle argument before copying `this`, takes &thread only after the inlined destructor and re-reads bufferA into r0 (moving it to r5 only inside the null test); this build keeps &thread and the buffer in r5 from the start. */
#include "nn/Result.h"
#include "nn/os/Thread.h"

/* A model-streaming worker (as far as its shutdown touches it). */
struct StreamWorker {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u8 unk84[0x1C];
    /* 0xA0 */ u32 unkA0;
    /* 0xA4 */ NnOsThread thread;
    /* 0xAC */ void *bufferB;
    /* 0xB0 */ void *bufferA;
    /* 0xB4 */ u8 unkB4[0x0C];
    /* 0xC0 */ s32 unkC0;
};

extern "C" {

s32 FUN_002c40f8(s32 *index, const s32 *handles, s32 count, s32 waitAll, s64 timeout);
void FUN_002c526c(s32 result);
void FUN_002c3f5c(void);
void asdMemFreeNonNull(void *block);
void asdMemFree(void *block);
void FUN_002759bc(void);
void mdlHandleArrayDestroy(StreamWorker *worker);

/* Shuts the worker down: joins and closes its thread, frees its buffers and destroys its model handle array. */
void FUN_003c7f20(StreamWorker *worker)
{
    s32 handle = worker->thread.handle;
    s32 index;
    s32 result = FUN_002c40f8(&index, &handle, 1, 0, -1);
    if (nnResultIsFailure(result)) {
        FUN_002c526c(result);
    }
    worker->thread.joined = 1;
    worker->thread.~NnOsThread();
    if (worker->bufferA != NULL) {
        FUN_002c3f5c();
        void *buffer = worker->bufferA;
        if (buffer != NULL) {
            FUN_002c3f5c();
            asdMemFreeNonNull(buffer);
        }
        worker->bufferA = NULL;
    }
    if (worker->bufferB != NULL) {
        asdMemFree(worker->bufferB);
        worker->bufferB = NULL;
    }
    worker->unkC0 = -1;
    if (worker->unkA0 != 0) {
        worker->unkA0 = 0;
    }
    FUN_002759bc();
    mdlHandleArrayDestroy(worker);
    worker->unk80 = 0;
}

} /* extern "C" */
