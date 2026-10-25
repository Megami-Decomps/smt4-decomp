#ifndef CLASSES_OBJ422214_H
#define CLASSES_OBJ422214_H

#include "common.h"

/* The object whose vtable is at 0x422214 in smt4 and 0x55c71c in smt4a (named after the smt4
 * address until its real name is known): it owns a heap block holding a pair of buffers and frees
 * it when it is destroyed. Slot 0 is the destructor; the vtable is stored by smt4a _ZN9Obj422214D1Ev
 * (its destructor) and _ZN9Obj422214C1Ev. */
class Obj422214 {
public:
    Obj422214();
    virtual ~Obj422214();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ void *buffers;
};

#endif
