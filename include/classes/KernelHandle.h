#ifndef CLASSES_KERNELHANDLE_H
#define CLASSES_KERNELHANDLE_H

#include "common.h"

/* A kernel handle that is closed when the object is destroyed (the destructor is _ZN12KernelHandleD1Ev). */
class KernelHandle {
public:
    KernelHandle();
    ~KernelHandle();

    /* 0x00 */ u32 handle;
};

#endif
