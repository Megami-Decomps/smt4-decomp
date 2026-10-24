#ifndef CLASSES_OBJ557B28_H
#define CLASSES_OBJ557B28_H

#include "common.h"

/* The object whose vtable is at 0x557b28 (named after it until its real name is known): a model
 * motion tuning block, constructed with its defaults. Slots 0/1 are the destructor, 2-9 its
 * other virtual methods. */
class Obj557b28 {
public:
    Obj557b28();
    virtual ~Obj557b28();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 unk21;
    /* 0x22 */ u8 unk22;
    /* 0x23 */ u8 unk23;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ f32 unk2c;
    /* 0x30 */ f32 unk30;
    /* 0x34 */ f32 unk34;
    /* 0x38 */ f32 unk38;
    /* 0x3C */ u8 unk3c[0x70];
    /* 0xAC */ f32 unkAc;
    /* 0xB0 */ f32 unkB0;
    /* 0xB4 */ f32 unkB4;
    /* 0xB8 */ f32 unkB8;
    /* 0xBC */ f32 unkBc;
    /* 0xC0 */ f32 unkC0;
    /* 0xC4 */ u8 unkC4;
    /* 0xC5 */ u8 unkC5[3];
};

typedef char Obj557b28LayoutCheck[sizeof(Obj557b28) == 0xc8 ? 1 : -1];

#endif
