#ifndef NW_SND_TASKTHREADSTATE_H
#define NW_SND_TASKTHREADSTATE_H
#include "common.h"
#include "nn/os/ThreadLaunch.h"
#include <stddef.h>

/* Recovered prefix of the SDK task-thread object. */
struct TaskThreadState {
    u32 unk00[2];
    u8 criticalSection[0xC];
    u8 stopRequested;
    u8 started;
};
struct TaskThreadStartContext {
    TaskThreadState *thread;
    ThreadArgumentDescriptor descriptor;
};
typedef char TaskThreadStateLayoutCheck[
    offsetof(TaskThreadState, criticalSection) == 8 &&
    offsetof(TaskThreadState, stopRequested) == 0x14 &&
    offsetof(TaskThreadState, started) == 0x15 && sizeof(TaskThreadState) == 0x18 ? 1 : -1];
typedef char TaskThreadStartContextLayoutCheck[
    offsetof(TaskThreadStartContext, thread) == 0 &&
    offsetof(TaskThreadStartContext, descriptor) == 4 &&
    offsetof(TaskThreadStartContext, descriptor.callbacks) == 8 &&
    sizeof(TaskThreadStartContext) == 0x14 ? 1 : -1];
#endif
