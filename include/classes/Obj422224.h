#ifndef CLASSES_OBJ422224_H
#define CLASSES_OBJ422224_H

#include "common.h"

/* An object whose vtable is at 0x422224 (named after it until its real name is known): a block of
 * cleared fields with a 0xFF byte at +0x10. */
class Obj422224 {
public:
    Obj422224();
    virtual ~Obj422224();

    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ u32 unk14[4];
    /* 0x24 */ u32 unk24[3];
    /* 0x30 */ u32 unk30[0x20];
    /* 0xB0 */ u32 unkB0;
    /* 0xB4 */ u32 unkB4;
};

typedef char Obj422224SizeCheck[sizeof(Obj422224) == 0xB8 ? 1 : -1];

#endif
