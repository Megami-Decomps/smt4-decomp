/* A kernel handle the owner closes when it lets go of it: owners reach the close as
 * `handle.~NnOsHandle()` or through their own destructor. */
#ifndef NN_OS_HANDLE_H
#define NN_OS_HANDLE_H

#include "common.h"
#include "nn/svc.h"
#include <stddef.h>

struct NnOsHandle {
    NnOsHandle() : handle(0) {}
    /* 0x00 */ u32 handle;

    ~NnOsHandle()
    {
        if (handle != 0) {
            nn::svc::CloseHandle(handle);
            handle = 0;
        }
    }
};

typedef char NnOsHandleLayoutCheck[
    sizeof(NnOsHandle) == 4 && offsetof(NnOsHandle, handle) == 0 ? 1 : -1];

#endif
