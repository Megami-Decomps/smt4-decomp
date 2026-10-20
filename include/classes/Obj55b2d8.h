#ifndef OBJ55B2D8_H
#define OBJ55B2D8_H

#include "common.h"

/* The object whose vtable is at 0x55b2d8 (named after it until its real name is known); the vtable
 * is stored by FUN_002ee524 and FUN_002fde5c (constructors, which call init) and FUN_002ee54c (the
 * destructor). */
class Obj55b2d8 {
public:
    virtual ~Obj55b2d8();
    void init();

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
};

#endif
