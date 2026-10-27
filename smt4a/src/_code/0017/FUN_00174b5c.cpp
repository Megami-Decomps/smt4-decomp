/* NON_MATCHING: thread-capture frame layout, descriptor stores, and result-flag control flow differ. */
#include "nw/snd/TaskThreadState.h"
#include "shard/W6_W6Match7_SoundInit.h"
#include "sys/ResultReport.h"

extern "C" {
void FUN_0019065c(TaskThreadState *thread);
void nn_os_CriticalSection_Initialize(void *section);
void nw_snd_internal_TaskThread_ThreadFunc(void *argument);
void FUN_00100ad8(void);
void emptyStub_00100df2(void);
void FUN_00100dec(void);
s32 FUN_002fb0d4(TaskThreadState *thread, const ThreadArgumentDescriptor *descriptor,
                 void (*entry)(void *), const void *argument, void *stackTop,
                 s32 priority, s32 processor, u32 options);

// Start the SDK sound-task worker, restarting an already active thread first.
bool FUN_00174b5c(TaskThreadState *thread, s32 priority, const SoundInitStack *stack)
{
    if (thread->started) {
        FUN_0019065c(thread);
    }
    thread->stopRequested = 0;
    nn_os_CriticalSection_Initialize(thread->criticalSection);
    TaskThreadStartContext context;
    context.thread = thread;
    context.descriptor.argumentSize = 4;
    context.descriptor.callbacks[0] = FUN_00100ad8;
    context.descriptor.callbacks[1] = emptyStub_00100df2;
    context.descriptor.callbacks[2] = FUN_00100dec;
    s32 result = FUN_002fb0d4(
        thread, &context.descriptor, nw_snd_internal_TaskThread_ThreadFunc, &context,
        stack->buffer + stack->size, priority, -2, 0);
    if (((u32)result & 0x07E00000) != 0x00600000) {
        bool failed = result < 0;
        if (failed) {
            FUN_002e3140(result, failed);
        }
    }
    bool started = result >= 0;
    if (started) {
        thread->started = 1;
    }
    return started;
}
}
