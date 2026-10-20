#ifndef OBJ464CB0_H
#define OBJ464CB0_H

#include "common.h"

/* The object whose vtable is at 0x464cb0 (named after it until its real name is known). Its
 * methods each post the object and a message id to the command queue (a pointer array and an entry
 * count, DAT_004729e0/DAT_004729e4 in smt4); the ids are in the method names. The vtable is stored
 * by FUN_0011b468. The methods are pure here only so that no unit emits the vtable: the functions
 * exist and the constructor is still C-form. */
class Obj464cb0 {
public:
    virtual void post010040() = 0;  /* +0x00: FUN_0030975c */
    virtual void post0f0105() = 0;  /* +0x04 */
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;
    virtual void vfunc10() = 0;
    virtual void vfunc14() = 0;
    virtual void vfunc18() = 0;
    virtual void post0f0103() = 0;  /* +0x1C */
    virtual void vfunc20() = 0;
    virtual void vfunc24() = 0;
    virtual void vfunc28() = 0;
    virtual void vfunc2c() = 0;
};

#endif
