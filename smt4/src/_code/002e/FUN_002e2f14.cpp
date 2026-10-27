/* NON_MATCHING: thread-handle load occurs after the stack allocation rather than before it. */
#include "nn/Result.h"
#include "nn/os/Handle.h"
#include "nn/os/Thread.h"
#include "sys/ResultReport.h"

/* An object that runs a worker thread: the thread, a scratch buffer and a wake-up handle. */
struct ThreadOwner {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ void *buffer;
    /* 0x2c */ u8 state[0x18];
    /* 0x44 */ NnOsThread thread;
    /* 0x4c */ NnOsHandle wake;
};

extern "C" {
s32 FUN_002c40f8(s32 *signaled, u32 *handles, s32 count, s32 waitAll, s64 timeout);
void FUN_002c3f5c(void *state);
void asdMemFree(void *block);

// Waits for the worker thread to end, then releases the thread, its buffer and the wake handle.
void FUN_002e2f14(ThreadOwner *owner)
{
    s32 signaled;
    u32 handle = owner->thread.handle;
    s32 result = FUN_002c40f8(&signaled, &handle, 1, 0, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002c526c(result, failed);
    }
    owner->thread.joined = 1;
    owner->thread.~NnOsThread();
    FUN_002c3f5c(owner->state);
    if (owner->buffer != NULL) {
        asdMemFree(owner->buffer);
        owner->buffer = NULL;
    }
    owner->wake.~NnOsHandle();
}
}
