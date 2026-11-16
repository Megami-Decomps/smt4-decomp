/* NON_MATCHING: FUN_002e2f14 shape; only scheduling remains: retail computes the thread address (add r0, r4, #1068) after the joined-flag store and copies it to r5, the build hoists it into r5 above the wait call. */
#include "nn/Result.h"
#include "nn/os/Thread.h"
#include "sys/ResultReport.h"

/* The CEC worker process (the part its shutdown touches). */
struct CecProcess {
    /* 0x000 */ u8 unk000[0x428];
    /* 0x428 */ s32 state;
    /* 0x42c */ NnOsThread thread;
    /* 0x434 */ u8 queue[0x14];
    /* 0x448 */ u8 unk448[4];
    /* 0x44c */ void *buffer;
};

extern "C" {

extern CecProcess *g_cecProcess;

s32 FUN_002c40f8(s32 *signaled, u32 *handles, s32 count, s32 waitAll, s64 timeout);
void FUN_002c3f5c(void *queue);
void asdMemFree(void *block);

// Waits for the worker thread to end, then releases the thread, its queue and buffer.
void FUN_002ecfe4(void)
{
    CecProcess *process = g_cecProcess;
    if (process != NULL) {
        s32 signaled;
        u32 handles[1] = { process->thread.handle };
        s32 result = FUN_002c40f8(&signaled, handles, 1, 0, -1);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            resultHandleFailure(result, failed);
        }
        process->thread.joined = 1;
        /* Joined above: finalize the thread, then close its handle through the handle's destructor. */
        process->thread.finalize();
        process->thread.NnOsHandle::~NnOsHandle();
        FUN_002c3f5c(process->queue);
        if (process->buffer != NULL) {
            asdMemFree(process->buffer);
            process->buffer = NULL;
        }
        process->state = -1;
    }
}

}
