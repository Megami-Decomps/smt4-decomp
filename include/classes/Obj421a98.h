#ifndef CLASSES_OBJ421A98_H
#define CLASSES_OBJ421A98_H

#include "common.h"

/* Base of the object whose constructor is at 0x141140 (vtable at 0x421a98): 0xF4 bytes of float and
 * counter defaults, set by its constructor. */
class Obj421a98 {
public:
    Obj421a98();
    virtual void vfunc08();
    /* 0x04 */ u8 unk04[0xF0];
};

typedef char Obj421a98SizeCheck[sizeof(Obj421a98) == 0xF4 ? 1 : -1];

#endif
