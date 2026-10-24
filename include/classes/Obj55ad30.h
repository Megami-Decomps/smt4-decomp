#ifndef CLASSES_OBJ55AD30_H
#define CLASSES_OBJ55AD30_H

#include "common.h"

/* Abstract record base (vtable 0x55ad30, two unimplemented slots): a state byte and five value words. */
class Obj55ad30 {
public:
    Obj55ad30() : flag(0) {}
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;
    /* 0x04 */ u8 flag;
    /* 0x08 */ u32 valueA;
    /* 0x0C */ u32 valueB;
    /* 0x10 */ u32 valueC;
    /* 0x14 */ u16 shortA;
    /* 0x16 */ u16 shortB;
};

typedef char Obj55ad30SizeCheck[sizeof(Obj55ad30) == 0x18 ? 1 : -1];

#endif
