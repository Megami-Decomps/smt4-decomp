/* NON_MATCHING: the svc calls (SignalEvent, WaitSynchronization1, CloseHandle) now match through nn/svc.h; retail keeps the handle field addresses in a register (add r5,r4,#off) for each close, hoists the zero into r6 before the wait and holds the player object in r5. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "mobiclip_ctrl/S4FsReader.h"
#include "sys/ResultReport.h"

/* The Mobiclip player's allocation: the block and the object living in it. */
struct S4MovieAllocation {
    void *block;
    void *object;
};

extern "C" {
extern S4MovieAllocation DAT_005880f8;

s32 svcWaitSynchronization1(u32 handle, s64 timeout);
void nn_os_Thread_FinalizeImpl(u32 *thread);
void FUN_001469a8(void *object);
void asdOperatorDelete(void *object);
void asdMemFree(void *block);

/* Closes a kernel handle and clears it; nothing to do for an unset handle. */
static void closeHandleAndClear(u32 *handle)
{
    if (*handle != 0) {
        svcCloseHandle(*handle);
        *handle = 0;
    }
}

/* Stops the reader thread, closes its handles and frees the buffers and the player's allocation. */
void FUN_00422654(S4FsReader *reader)
{
    if (reader->source == NULL) {
        return;
    }
    s32 result = nn::svc::SignalEvent(reader->stopEvent);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    result = svcWaitSynchronization1(reader->threadHandle, -1);
    failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    reader->threadJoined = 1;
    nn_os_Thread_FinalizeImpl(&reader->threadHandle);
    closeHandleAndClear(&reader->threadHandle);
    FUN_001469a8(DAT_005880f8.object);
    void *object = DAT_005880f8.object;
    if (object != NULL) {
        FUN_001469a8(object);
        asdOperatorDelete(object);
    }
    DAT_005880f8.object = NULL;
    asdMemFree(DAT_005880f8.block);
    DAT_005880f8.block = NULL;
    *(s32 *)(reader->lock + 8) = -1;
    closeHandleAndClear(&reader->dataEvent);
    closeHandleAndClear(&reader->stopEvent);
    if (reader->ring != NULL) {
        reader->allocator->release(reader->ring);
        reader->ring = NULL;
    }
    if (reader->scratch != NULL) {
        reader->allocator->release(reader->scratch);
        reader->scratch = NULL;
    }
    reader->scratchSize = 0;
    reader->consumed = 0;
    reader->produced = 0;
    reader->requested = 0;
    reader->source = NULL;
    reader->allocator = NULL;
}
}
