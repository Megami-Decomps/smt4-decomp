#ifndef CLASSES_OBJ55AAE4_H
#define CLASSES_OBJ55AAE4_H

#include "classes/Obj55a788.h"
#include "classes/Obj55aff4Vector.h"

/* The polymorphic base holds a descriptor and an array of string values. */
class Obj55aae4 {
public:
    Obj55aae4() : state(0), descriptor(0, 0xffff), elements(0) {}
    virtual ~Obj55aae4();

protected:
    /* 0x04 */ u8 state;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ Obj55a788 descriptor;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ Obj55aff4Vector elements;
};

#endif
