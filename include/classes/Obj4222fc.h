#ifndef CLASSES_OBJ4222FC_H
#define CLASSES_OBJ4222FC_H

#include "classes/CallbackControllerBase.h"

/* A callback controller of kind 1 (vtable at 0x4222fc; named after it until its real name is known). */
class Obj4222fc : public CallbackControllerBase {
public:
    Obj4222fc();
    virtual void vfunc08();
    virtual void vfunc0c();

    /* 0x10 */ u8 unk10[0xc];
};

typedef char Obj4222fcSizeCheck[sizeof(Obj4222fc) == 0x1c ? 1 : -1];

#endif
