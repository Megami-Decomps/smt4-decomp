#ifndef OBJ44E8A8_H
#define OBJ44E8A8_H

#include "common.h"

/* The object whose vtable is at 0x44e8a8 (named after it until its real name is known); the
 * vtable is stored by FUN_002bd498. The methods are pure here only so that no unit emits the
 * vtable: the functions exist and the constructor is still C-form. */
class Obj44e8a8 {
public:
    virtual void vfunc00() = 0;
    virtual void vfunc04() = 0;
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;   /* does nothing */
    virtual void vfunc10() = 0;
    virtual void vfunc14() = 0;
};

#endif
