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
    virtual void post010040() = 0;  /* +0x00: _ZN9Obj464cb010post010040Ev */
    virtual void post0f0105() = 0;  /* +0x04 */
    virtual void post0f0106() = 0;  /* +0x08 */
    virtual void postSelectedWord() = 0;  /* +0x0C: _ZN9Obj464cb016postSelectedWordEv */
    virtual void post0f0104() = 0;  /* +0x10 */
    virtual void post0f0107() = 0;  /* +0x14: _ZN9Obj464cb010post0f0107Ev */
    virtual void post0f0101() = 0;  /* +0x18: _ZN9Obj464cb010post0f0101Ev */
    virtual void post0f0103() = 0;  /* +0x1C */
    virtual void post0100e0() = 0;  /* +0x20: _ZN9Obj464cb010post0100e0Ev */
    virtual void vfunc24() = 0;
    virtual void vfunc28() = 0;
    virtual void vfunc2c() = 0;
};

#endif
