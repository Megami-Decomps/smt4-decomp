/* NON_MATCHING: only the placement of the shared zero constant differs (retail hoists `mov r7, #0` above the svc; the build emits it after the thread finalize). */
#include "nn/Result.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/os/Thread.h"

/* The memory mapped for the worker thread's stack: its destructor unmaps it, and the block goes
 * back through the engine's operator delete. */
struct StackRegion : AddressSpaceRegion {
    ~StackRegion();
    static void operator delete(void *block);
};

/* The streaming object (the part its shutdown touches, at the end of a large block). */
struct StreamWorker {
    /* 0x0000 */ u8 unk0000[0x4cf8];
    /* 0x4cf8 */ NnOsThread thread;
    /* 0x4d00 */ void *buffer;
    /* 0x4d04 */ StackRegion *stack;
    /* 0x4d08 */ u8 unk4d08[0xc];
    /* 0x4d14 */ s32 position;
};

extern "C" {

void FUN_002e3140(s32 result, bool failed);
void FUN_001469a8(AddressSpaceRegion *region);
void asdOperatorDelete(void *block);
void asdMemFree(void *block);
s32 svcWaitSynchronization1(u32 handle, s64 timeout); /* svc 0x24 */

}

inline StackRegion::~StackRegion()
{
    FUN_001469a8(this);
}

inline void StackRegion::operator delete(void *block)
{
    asdOperatorDelete(block);
}

extern "C" {

// Waits for the worker thread to end, then releases the thread, its stack, its buffer and the position.
void FUN_003f19dc(StreamWorker *worker)
{
    s32 result = svcWaitSynchronization1(worker->thread.handle, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    worker->thread.joined = 1;
    worker->thread.~NnOsThread();
    if (worker->stack != NULL) {
        FUN_001469a8(worker->stack);
        StackRegion *stack = worker->stack;
        delete stack;
        worker->stack = NULL;
    }
    if (worker->buffer != NULL) {
        asdMemFree(worker->buffer);
        worker->buffer = NULL;
    }
    worker->position = -1;
}

}
