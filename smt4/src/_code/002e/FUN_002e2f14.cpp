#include "nn/os/WaitObject.h"
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
void addressSpaceRegionFree(void *state);
void asdMemFree(void *block);

// Waits for the worker thread to end, then releases the thread, its buffer and the wake handle.
void FUN_002e2f14(ThreadOwner *owner)
{
    nn::os::ThreadJoin(&owner->thread);
    /* Joined above: finalize the thread, then close its handle through the handle's destructor. */
    owner->thread.finalize();
    owner->thread.NnOsHandle::~NnOsHandle();
    addressSpaceRegionFree(owner->state);
    if (owner->buffer != NULL) {
        asdMemFree(owner->buffer);
        owner->buffer = NULL;
    }
    owner->wake.~NnOsHandle();
}
}
