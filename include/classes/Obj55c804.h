#ifndef CLASSES_OBJ55C804_H
#define CLASSES_OBJ55C804_H

#include "classes/CallbackControllerBase.h"

/* A callback controller of kind 1 (vtable at 0x55c804; named after it until its real name is known). */
class Obj55c804 : public CallbackControllerBase {
public:
    Obj55c804();
    virtual void vfunc08();
    virtual void vfunc0c();

    /* 0x10 */ u8 unk10[0xc];
};

typedef char Obj55c804SizeCheck[sizeof(Obj55c804) == 0x1c ? 1 : -1];

#endif
