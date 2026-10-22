#ifndef CLASSES_OBJ5592AC_H
#define CLASSES_OBJ5592AC_H

#include "shard/W4_Match4_Obj559ecc.h"

/* String value linked into the global tracked-string registry. */
class Obj5592ac {
public:
    Obj5592ac(const Obj55aff4 &text);
    virtual ~Obj5592ac();
    /* 0x04 */ Obj5592ac *next;
    /* 0x08 */ Obj5592ac *previous;
    /* 0x0C */ Obj55aff4 text;
    /* 0x14 */ s32 index;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 unk20;
};

#endif
