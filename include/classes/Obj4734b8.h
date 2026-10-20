#ifndef OBJ4734B8_H
#define OBJ4734B8_H

#include "common.h"

/* The object whose vtable is at 0x4734b8 (named after it until its real name is known): a
 * two-method interface; the vtable is stored by FUN_00120740 and FUN_002b50e4. The methods are
 * pure here only so that no unit emits the vtable: the functions exist and the constructors that
 * store the vtable are still C-form. */
class Obj4734b8 {
public:
    virtual s32 vfunc00() = 0;
    virtual void vfunc04() = 0;
};

#endif
