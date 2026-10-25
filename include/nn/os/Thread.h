/* nn::os::Thread as the games embed it: the kernel handle and a flag that says the thread has been
 * joined. The destructor finalizes the thread (joining it if that has not happened) and closes
 * whatever handle is left; owners reach it as `thread.~NnOsThread()` or through their own
 * destructor. */
#ifndef NN_OS_THREAD_H
#define NN_OS_THREAD_H

#include "common.h"
#include "nn/os/Handle.h"
#include <stddef.h>

extern "C" void nn_os_Thread_FinalizeImpl(u32 *thread);

struct NnOsThread : NnOsHandle {
    NnOsThread() : NnOsHandle(), joined(1) {}
    /* 0x04 */ u8 joined;
    /* 0x05 */ u8 unk05[3];

    ~NnOsThread()
    {
        nn_os_Thread_FinalizeImpl(&handle);
    }
};

typedef char NnOsThreadLayoutCheck[
    sizeof(NnOsThread) == 8 && offsetof(NnOsThread, handle) == 0 &&
    offsetof(NnOsThread, joined) == 4 ? 1 : -1];

#endif
