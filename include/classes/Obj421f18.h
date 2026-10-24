#ifndef CLASSES_OBJ421F18_H
#define CLASSES_OBJ421F18_H

#include "common.h"
#include "classes/Obj421a98.h"
#include "classes/Obj421d74.h"
#include "classes/Obj421f04.h"

/* The object built by the four-layer constructor at 0x141140 (vtable 0x421f18): the Obj421a98 base, a parameter
 * holder, the owner word and the embedded signalling object. */
class Obj421f18 : public Obj421a98 {
public:
    Obj421f18(u32 owner);
    virtual void vfunc08();
    /* 0x0F4 */ Obj421d74 params;
    /* 0x194 */ u32 owner;
    /* 0x198 */ Obj421f04 signal;
    /* 0x450 */ u32 unk450;
    /* 0x454 */ u32 unk454;
    /* 0x458 */ u32 unk458;
    /* 0x45C */ u8 unk45C;
    /* 0x45D */ u8 flag45D;
    /* 0x45E */ u8 flag45E;
    /* 0x45F */ u8 unk45F;
};

typedef char Obj421f18SizeCheck[sizeof(Obj421f18) == 0x460 ? 1 : -1];

#endif
