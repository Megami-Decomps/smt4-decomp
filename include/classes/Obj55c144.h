#ifndef CLASSES_OBJ55C144_H
#define CLASSES_OBJ55C144_H

#include "common.h"

/* A vtable-only object (vtable at 0x55c144; named after it until its real name is known). The static
 * initialiser FUN_00512388 constructs the instance at 0x5c0f7c and registers its destructor with atexit. */
class Obj55c144 {
public:
    virtual ~Obj55c144();
    virtual void vfunc08(); /* 0x508bd0 */
};

typedef char Obj55c144SizeCheck[sizeof(Obj55c144) == 4 ? 1 : -1];

#endif
