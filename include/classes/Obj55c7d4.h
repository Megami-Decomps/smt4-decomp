#ifndef CLASSES_OBJ55C7D4_H
#define CLASSES_OBJ55C7D4_H

#include "classes/CallbackControllerBase.h"

/* A callback controller of kind 2 (vtable at 0x55c7d4; named after it until its real name is known). */
class Obj55c7d4 : public CallbackControllerBase {
public:
    Obj55c7d4();
    virtual void vfunc08();
    virtual void vfunc0c();
};

typedef char Obj55c7d4SizeCheck[sizeof(Obj55c7d4) == 0x10 ? 1 : -1];

#endif
