#ifndef CLASSES_OBJ55C00C_H
#define CLASSES_OBJ55C00C_H

#include "common.h"

/* A vtable-only object (vtable at 0x55c00c; named after it until its real name is known). The static
 * initialiser FUN_00512388 constructs the instance at 0x5c0f6c and registers its destructor with atexit. */
class Obj55c00c {
public:
    virtual ~Obj55c00c();
    virtual void vfunc08(); /* 0x508330 */
};

typedef char Obj55c00cSizeCheck[sizeof(Obj55c00c) == 4 ? 1 : -1];

#endif
