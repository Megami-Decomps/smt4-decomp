#ifndef CLASSES_OBJ559010_H
#define CLASSES_OBJ559010_H

#include "common.h"

/* A 0x50-byte polymorphic helper object (vtable at 0x559010) that Obj559020 embeds. Its copy
 * constructor is _ZN9Obj559010C1ERKS_, its default constructor _ZN9Obj559010C1Ev and its destructor
 * _ZN9Obj559010D1Ev. */
class Obj559010 {
public:
    Obj559010();
    Obj559010(const Obj559010 &other);
    virtual ~Obj559010();

    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ u32 unk1c[3];
    /* 0x28 */ u8 unk28[0x28];
};

#endif
