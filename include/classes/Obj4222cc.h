#ifndef CLASSES_OBJ4222CC_H
#define CLASSES_OBJ4222CC_H

#include "classes/CallbackControllerFlags.h"

struct CallbackControllerOwner;

/* A callback controller of kind 2 (vtable at 0x4222cc; named after it until its real name is known). */
class Obj4222cc : public CallbackControllerFlags {
public:
    Obj4222cc();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();

    /* 0x08 */ s32 kind;
    /* 0x0C */ CallbackControllerOwner *owner;
};

typedef char Obj4222ccSizeCheck[sizeof(Obj4222cc) == 0x10 ? 1 : -1];

#endif
