/* NON_MATCHING: register allocation only (svc 0x24 and 0x23 match through nn/svc.h): retail builds the -1 timeout in r2 then r3, hoists the zero into r6 before the wait and keeps &event/&thread in registers; the build orders those differently. */
#include "nn/Result.h"
#include "nn/os/Thread.h"

/* A kernel handle that closes itself. */
struct KernelHandle {
    u32 handle;

    ~KernelHandle()
    {
        if (handle != 0) {
            nn::svc::CloseHandle(handle);
            handle = 0;
        }
    }
};

/* A worker owner: its buffer, lock, reader thread and wake-up event. */
struct ThreadedWorker {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ void *buffer;
    /* 0x2C */ u8 lock[0x18];
    /* 0x44 */ NnOsThread thread;
    /* 0x4C */ KernelHandle event;
};

extern "C" {

void FUN_001469a8(u8 *lock);
void asdMemFree(void *block);
void FUN_002e3140(s32 result);

/* Waits for the worker's thread to finish, then closes it, releases its lock and buffer and closes its event. */
void FUN_0035d7bc(ThreadedWorker *worker, u32 skipped)
{
    s32 result = nn::svc::WaitSynchronization1(worker->thread.handle, skipped, 0xFFFFFFFF, 0xFFFFFFFF);

    if (nnResultIsFailure(result)) {
        FUN_002e3140(result);
    }
    worker->thread.joined = 1;
    worker->thread.~NnOsThread();
    FUN_001469a8(worker->lock);
    if (worker->buffer != NULL) {
        asdMemFree(worker->buffer);
        worker->buffer = NULL;
    }
    worker->event.~KernelHandle();
}

} /* extern "C" */
