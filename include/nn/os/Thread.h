/* nn::os::Thread as the games embed it: the kernel handle and a flag that says the thread has been
 * joined. The destructor finalizes the thread (joining it if that has not happened) and closes
 * whatever handle is left (finalize(), then close(): the zero for the cleared handle reuses r0).
 * An owner that has joined the thread itself finalizes it and closes the handle through
 * NnOsHandle's destructor (FUN_002e2f14). */
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
        finalize();
        close();
    }

    /* Joins the thread unless that already happened. */
    void finalize()
    {
        nn_os_Thread_FinalizeImpl(&handle);
    }
};

typedef char NnOsThreadLayoutCheck[
    sizeof(NnOsThread) == 8 && offsetof(NnOsThread, handle) == 0 &&
    offsetof(NnOsThread, joined) == 4 ? 1 : -1];

#endif
