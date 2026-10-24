#ifndef CLASSES_OBJ55C5A0_H
#define CLASSES_OBJ55C5A0_H

#include "common.h"

/* An abstract base (vtable at 0x55c5a0, named after it until its real name is known; 0x70 bytes of
 * vtable, mostly pure-virtual stubs). Its constructor only installs the vtable and calls a debug
 * hook; the derived objects (state at +4..) fill the rest in. */
class Obj55c5a0 {
public:
    Obj55c5a0();
    virtual ~Obj55c5a0() = 0;
    virtual void vfunc08() = 0;
};

#endif
