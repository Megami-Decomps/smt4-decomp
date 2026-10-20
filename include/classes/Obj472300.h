#ifndef OBJ472300_H
#define OBJ472300_H

#include "common.h"

/* The object whose vtable is at 0x472300 (named after it until its real name is known); the
 * vtable is stored by FUN_0012e3fc. The methods are pure here only so that no unit emits the
 * vtable: the functions exist and the constructor is still C-form. */
class Obj472300 {
public:
    virtual void vfunc00() = 0;
    virtual void vfunc04() = 0;   /* does nothing */
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;   /* does nothing */
};

#endif
