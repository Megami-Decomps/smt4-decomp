#ifndef CLASSES_OBJ4222CC_H
#define CLASSES_OBJ4222CC_H

#include "classes/CallbackControllerBase.h"

/* A callback controller of kind 2 (vtable at 0x4222cc; named after it until its real name is known). */
class Obj4222cc : public CallbackControllerBase {
public:
    Obj4222cc();
    virtual void vfunc08();
    virtual void vfunc0c();
};

typedef char Obj4222ccSizeCheck[sizeof(Obj4222cc) == 0x10 ? 1 : -1];

#endif
