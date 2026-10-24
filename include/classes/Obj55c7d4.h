#ifndef CLASSES_OBJ55C7D4_H
#define CLASSES_OBJ55C7D4_H

#include "classes/CallbackControllerFlags.h"

struct CallbackControllerOwner;

/* A callback controller of kind 2 (vtable at 0x55c7d4; named after it until its real name is known). */
class Obj55c7d4 : public CallbackControllerFlags {
public:
    Obj55c7d4();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();

    /* 0x08 */ s32 kind;
    /* 0x0C */ CallbackControllerOwner *owner;
};

typedef char Obj55c7d4SizeCheck[sizeof(Obj55c7d4) == 0x10 ? 1 : -1];

#endif
