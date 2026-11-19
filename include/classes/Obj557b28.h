#ifndef CLASSES_OBJ557B28_H
#define CLASSES_OBJ557B28_H

#include "common.h"

/* Four state bytes of an Obj557b28 (0x20-0x23), constructed as three cleared bytes and 0x66. */
struct Obj557b28State {
    Obj557b28State() : unk00(0), unk01(0), unk02(0), unk03(0x66) {}
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
};

/* The six tuning values of an Obj557b28 (0x24-0x3B), constructed with their defaults. */
struct Obj557b28Tuning {
    Obj557b28Tuning()
        : unk00(3.0f), unk04(20000.0f), unk08(0.6597344f), unk0c(1.7f), unk10(1.6666666f), unk14(250.0f) {}
    /* 0x00 */ f32 unk00;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 unk08;   /* about 37.8 degrees in radians */
    /* 0x0C */ f32 unk0c;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
};

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
    /* 0x20 */ Obj557b28State state;
    /* 0x24 */ Obj557b28Tuning tuning;
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

typedef char Obj557b28LayoutCheck[sizeof(Obj557b28) == 0xc8 && sizeof(Obj557b28State) == 4 &&
    sizeof(Obj557b28Tuning) == 0x18 ? 1 : -1];

#endif
