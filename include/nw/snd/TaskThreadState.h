#ifndef NW_SND_TASKTHREADSTATE_H
#define NW_SND_TASKTHREADSTATE_H
#include "common.h"
#include "nn/os/ThreadLaunch.h"
#include "nn/os/Thread.h"
#include "nn/os/CriticalSection.h"
#include <stddef.h>

/* The SDK sound task thread owns a kernel thread and a lock initialized when the worker starts. */
struct TaskThreadState {
    TaskThreadState() : criticalSection(nn::os::CRITICAL_SECTION_DEFERRED), stopRequested(0), started(0) {}

    /* 0x00 */ NnOsThread thread;
    /* 0x08 */ nn::os::CriticalSection criticalSection;
    /* 0x14 */ u8 stopRequested;
    /* 0x15 */ u8 started;
};
struct TaskThreadStartContext {
    TaskThreadState *thread;
    ThreadArgumentDescriptor descriptor;
};
typedef char TaskThreadStateLayoutCheck[
    offsetof(TaskThreadState, thread) == 0 && offsetof(TaskThreadState, criticalSection) == 8 &&
    offsetof(TaskThreadState, stopRequested) == 0x14 &&
    offsetof(TaskThreadState, started) == 0x15 && sizeof(TaskThreadState) == 0x18 ? 1 : -1];
typedef char TaskThreadStartContextLayoutCheck[
    offsetof(TaskThreadStartContext, thread) == 0 &&
    offsetof(TaskThreadStartContext, descriptor) == 4 &&
    offsetof(TaskThreadStartContext, descriptor.callbacks) == 8 &&
    sizeof(TaskThreadStartContext) == 0x14 ? 1 : -1];
#endif
