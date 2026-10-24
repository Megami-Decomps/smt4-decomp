/* nn::os::Thread as the games embed it: the kernel handle and a flag that says the thread has been
 * joined. The destructor finalizes the thread (joining it if that has not happened) and closes
 * whatever handle is left; owners reach it as `thread.~NnOsThread()` or through their own
 * destructor. */
#ifndef NN_OS_THREAD_H
#define NN_OS_THREAD_H

#include "common.h"
#include "nn/svc.h"

extern "C" void nn_os_Thread_FinalizeImpl(u32 *thread);

struct NnOsThread {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u8 joined;
    /* 0x05 */ u8 unk05[3];

    ~NnOsThread()
    {
        nn_os_Thread_FinalizeImpl(&handle);
        if (handle != 0) {
            nn::svc::CloseHandle(handle);
            handle = 0;
        }
    }
};

#endif
