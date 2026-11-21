#ifndef CLASSES_OBJ55C130_H
#define CLASSES_OBJ55C130_H

#include "common.h"

/* A vtable-only object (vtable at 0x55c130; named after it until its real name is known). The static
 * initialiser FUN_00512388 constructs the instance at 0x5c0f78 and registers its destructor with atexit. */
class Obj55c130 {
public:
    virtual ~Obj55c130();
    virtual void vfunc08(); /* 0x508b6c */
};

typedef char Obj55c130SizeCheck[sizeof(Obj55c130) == 4 ? 1 : -1];

#endif
