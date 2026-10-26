#include "classes/KernelHandle.h"
#include "nn/svc.h"

/* Closes the handle if one is held. */
KernelHandle::~KernelHandle()
{
    if (handle != 0) {
        nn::svc::CloseHandle(handle);
        handle = 0;
    }
}
