/* NON_MATCHING: only the schedule of the zero constant differs: retail hoists `mov r6, #0` between the thread-handle load and the timeout move before the svc; the build sets it after the thread finalize. */
#include "nn/os/WaitObject.h"
#include "nn/Result.h"
#include "nn/os/Handle.h"
#include "nn/os/Thread.h"
#include "sys/ResultReport.h"

/* A worker owner: its buffer, lock, reader thread and wake-up event. */
struct ThreadedWorker {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ void *buffer;
    /* 0x2C */ u8 lock[0x18];
    /* 0x44 */ NnOsThread thread;
    /* 0x4C */ NnOsHandle event;
};

extern "C" {

void addressSpaceRegionFree(u8 *lock);
void asdMemFree(void *block);

/* Waits for the worker's thread to finish, then closes it, releases its lock and buffer and closes its event. */
void FUN_0035d7bc(ThreadedWorker *worker)
{
    nn::os::ThreadJoin(&worker->thread);
    /* Joined above: finalize the thread, then close its handle through the handle's destructor. */
    worker->thread.finalize();
    worker->thread.NnOsHandle::~NnOsHandle();
    addressSpaceRegionFree(worker->lock);
    if (worker->buffer != NULL) {
        asdMemFree(worker->buffer);
        worker->buffer = NULL;
    }
    worker->event.~NnOsHandle();
}

} /* extern "C" */
