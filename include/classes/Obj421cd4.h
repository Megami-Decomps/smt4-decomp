#ifndef CLASSES_OBJ421CD4_H
#define CLASSES_OBJ421CD4_H

#include "common.h"

/* Object with an embedded Obj421c90 at +0x0C (vtable 0x421cd4); 0x278 bytes. */
class Obj421cd4 {
public:
    Obj421cd4();
    virtual void vfunc08();
    /* 0x04 */ u8 unk04[0x274];
};

typedef char Obj421cd4SizeCheck[sizeof(Obj421cd4) == 0x278 ? 1 : -1];

#endif
