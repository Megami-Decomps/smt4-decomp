#ifndef CLASSES_OBJ420708_H
#define CLASSES_OBJ420708_H

#include "classes/Obj420794.h"

/* A filter child (vtable at 0x420708, named after it until its real name is known; 0x20 bytes):
 * a scalar parameter the filter pushes colour targets into. */
class Obj420708 : public Obj420794Child {
public:
    Obj420708()
    {
        value = 0.0f;
        unk04 = 0;
    }
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* 0x04 */ u32 unk04;
    /* 0x08 */ f32 value;
    /* 0x0C */ u8 unk0C[0x14];
};

#endif
