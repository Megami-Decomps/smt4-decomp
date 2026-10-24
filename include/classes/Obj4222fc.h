#ifndef CLASSES_OBJ4222FC_H
#define CLASSES_OBJ4222FC_H

#include "classes/CallbackControllerFlags.h"

struct CallbackControllerOwner;

/* A callback controller of kind 1 (vtable at 0x4222fc; named after it until its real name is known). */
class Obj4222fc : public CallbackControllerFlags {
public:
    Obj4222fc();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();

    /* 0x08 */ s32 kind;
    /* 0x0C */ CallbackControllerOwner *owner;
    /* 0x10 */ u8 unk10[0xc];
};

typedef char Obj4222fcSizeCheck[sizeof(Obj4222fc) == 0x1c ? 1 : -1];

#endif
