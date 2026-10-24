#ifndef CLASSES_OBJ420880_H
#define CLASSES_OBJ420880_H

#include "classes/Obj420794.h"

/* A filter child (vtable at 0x420880, named after it until its real name is known; 0xC bytes):
 * a scalar parameter that starts at 1. */
class Obj420880 : public Obj420794Child {
public:
    Obj420880()
    {
        value = 1.0f;
        unk04 = 0;
    }
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* 0x04 */ u32 unk04;
    /* 0x08 */ f32 value;
};

#endif
