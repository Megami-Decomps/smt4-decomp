#ifndef SYS_FILEWORKERQUEUE_H
#define SYS_FILEWORKERQUEUE_H
#include "shard/FileQueueRequest.h"
#include "nn/os/ThreadLaunch.h"
#include <stddef.h>

struct FileQueueWorker : ThreadHandleState {
    u32 unk08;
    ThreadStackInfo *stack;
};
struct FileQueue {
    s32 readIndex;
    s32 writeIndex;
    s32 tailIndex;
    FileQueueRequest requests[96];
    u32 unk450c;
    FileQueueWorker thread;
    u32 semaphore;
};
typedef char FileWorkerQueueLayoutCheck[
    offsetof(FileQueue, requests) == 0xc && offsetof(FileQueue, thread) == 0x4510 &&
    offsetof(FileQueue, thread) + offsetof(FileQueueWorker, stack) == 0x451c &&
    sizeof(FileQueueWorker) == 0x10 && offsetof(FileQueue, semaphore) == 0x4520 &&
    sizeof(FileQueue) == 0x4524 ? 1 : -1];
#endif
