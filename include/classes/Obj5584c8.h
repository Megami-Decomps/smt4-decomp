#ifndef CLASSES_OBJ5584C8_H
#define CLASSES_OBJ5584C8_H

#include "common.h"

/* The 0x28-byte payload record whose vtable is at 0x5584c8 (named after it until its real name is
 * known; the vtable slots are zero in the image). The default constructor is _ZN9Obj5584c8C1Ev (id 0)
 * and the copy constructor is _ZN9Obj5584c8C1ERKS_ (copies the id and the 0x20 payload bytes). */
class Obj5584c8 {
public:
    Obj5584c8();
    Obj5584c8(const Obj5584c8 &other);

protected:
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ s32 id;
    /* 0x08 */ u8 payload[0x20];
};

#endif
