#ifndef CLASSES_OBJ55BEA0_H
#define CLASSES_OBJ55BEA0_H

#include "common.h"
#include <stddef.h>

/* The abstract base of a family of objects (vtable at 0x55bea0, named after it until its real name
 * is known; the objects whose vtables are at 0x55bfc4, 0x55c19c and 0x55c3b8 derive from it): a
 * 0x11C-byte block of transform-like defaults. Its only slot is a pure virtual function. */
class Obj55bea0 {
public:
    Obj55bea0();
    virtual void slot0() = 0;

    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x2C];
    /* 0x30 */ f32 unk30;
    /* 0x34 */ f32 unk34;
    /* 0x38 */ f32 unk38;
    /* 0x3C */ f32 unk3c;
    /* 0x40 */ f32 unk40;
    /* 0x44 */ f32 unk44;
    /* 0x48 */ f32 unk48;
    /* 0x4C */ u32 unk4c;
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u32 unk54;
    /* 0x58 */ f32 unk58;
    /* 0x5C */ f32 unk5c;
    /* 0x60 */ f32 unk60;
    /* 0x64 */ f32 unk64;
    /* 0x68 */ f32 unk68;
    /* 0x6C */ f32 unk6c;
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u32 unk74;
    /* 0x78 */ f32 unk78;
    /* 0x7C */ f32 unk7c;
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u32 unk84;
    /* 0x88 */ f32 unk88;
    /* 0x8C */ f32 unk8c;
    /* 0x90 */ u32 unk90;
    /* 0x94 */ u32 unk94;
    /* 0x98 */ u8 unk98[7];
    /* 0x9F */ u8 unk9f;
    /* 0xA0 */ u8 unkA0[0x18];
    /* 0xB8 */ f32 unkB8;
    /* 0xBC */ f32 unkBC;
    /* 0xC0 */ u32 unkC0;
    /* 0xC4 */ u32 unkC4;
    /* 0xC8 */ u8 unkC8[0x24];
    /* 0xEC */ u32 unkEC[11];
    /* 0x118 */ u8 unk118[4];
};

typedef char Obj55bea0SizeCheck[sizeof(Obj55bea0) == 0x11C &&
    offsetof(Obj55bea0, unk30) == 0x30 && offsetof(Obj55bea0, unk9f) == 0x9F &&
    offsetof(Obj55bea0, unkEC) == 0xEC ? 1 : -1];

#endif
