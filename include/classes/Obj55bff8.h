#ifndef CLASSES_OBJ55BFF8_H
#define CLASSES_OBJ55BFF8_H

#include "common.h"

/* A vtable-only object (vtable at 0x55bff8; named after it until its real name is known). The static
 * initialiser FUN_00512388 constructs the instance at 0x5c0f70 and registers its destructor with atexit. */
class Obj55bff8 {
public:
    virtual ~Obj55bff8();
    virtual void vfunc08(); /* 0x5082dc */
};

typedef char Obj55bff8SizeCheck[sizeof(Obj55bff8) == 4 ? 1 : -1];

#endif
