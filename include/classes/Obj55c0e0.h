#ifndef CLASSES_OBJ55C0E0_H
#define CLASSES_OBJ55C0E0_H

#include "common.h"

/* A vtable-only object (vtable at 0x55c0e0; named after it until its real name is known). The static
 * initialiser FUN_00512388 constructs the instance at 0x5c0f74 and registers its destructor with atexit. */
class Obj55c0e0 {
public:
    virtual ~Obj55c0e0();
    virtual void vfunc08(); /* 0x5088e4 */
};

typedef char Obj55c0e0SizeCheck[sizeof(Obj55c0e0) == 4 ? 1 : -1];

#endif
