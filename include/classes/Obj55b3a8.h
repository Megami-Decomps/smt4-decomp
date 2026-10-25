#ifndef CLASSES_OBJ55B3A8_H
#define CLASSES_OBJ55B3A8_H

#include "nn/os/CriticalSection.h"
#include "nn/os/Handle.h"
#include <stddef.h>

class Obj55b3a8 {
public:
    Obj55b3a8() : state(0), handle(), flags(0) {}
    virtual ~Obj55b3a8();

    /* 0x04 */ nn::os::CriticalSection section;
    /* 0x10 */ u32 state;
    /* 0x14 */ NnOsHandle handle;
    /* 0x18 */ u32 flags;
};

typedef char Obj55b3a8LayoutCheck[
    sizeof(Obj55b3a8) == 0x1c && offsetof(Obj55b3a8, section) == 4 &&
    offsetof(Obj55b3a8, state) == 0x10 && offsetof(Obj55b3a8, handle) == 0x14 &&
    offsetof(Obj55b3a8, flags) == 0x18 ? 1 : -1];

#endif
