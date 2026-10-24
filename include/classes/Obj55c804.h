#ifndef CLASSES_OBJ55C804_H
#define CLASSES_OBJ55C804_H

#include "classes/CallbackControllerFlags.h"

struct CallbackControllerOwner;

/* A callback controller of kind 1 (vtable at 0x55c804; named after it until its real name is known). */
class Obj55c804 : public CallbackControllerFlags {
public:
    Obj55c804();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();

    /* 0x08 */ s32 kind;
    /* 0x0C */ CallbackControllerOwner *owner;
    /* 0x10 */ u8 unk10[0xc];
};

typedef char Obj55c804SizeCheck[sizeof(Obj55c804) == 0x1c ? 1 : -1];

#endif
