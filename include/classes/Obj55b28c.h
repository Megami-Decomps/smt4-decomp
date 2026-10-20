#ifndef CLASSES_OBJ55B28C_H
#define CLASSES_OBJ55B28C_H

#include "common.h"

extern "C" void onlineScopedLockRelease(void *lock);

/* The object whose vtable is at 0x55b28c (named after it until its real name is known): a scoped
 * lock that releases what it holds when it goes out of scope. Slot 0 is the destructor; the vtable
 * is stored by FUN_001227a8, FUN_002e6e34 (the constructor) and the destructor. */
class Obj55b28c {
public:
    Obj55b28c();
    virtual ~Obj55b28c();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
};

#endif
