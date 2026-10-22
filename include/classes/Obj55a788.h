#ifndef CLASSES_OBJ55A788_H
#define CLASSES_OBJ55A788_H

#include "common.h"

/* Small polymorphic value descriptor; both virtual callbacks were stripped. */
class Obj55a788 {
public:
    Obj55a788(u32 value, u16 kind);
    Obj55a788 &operator=(const Obj55a788 &other);
    virtual void unk00();
    virtual void unk04();
    /* 0x04 */ u8 active;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 value;
    /* 0x0C */ u16 kind;
};

#endif
