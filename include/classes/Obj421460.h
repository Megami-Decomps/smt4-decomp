#ifndef CLASSES_OBJ421460_H
#define CLASSES_OBJ421460_H

#include "common.h"

extern "C" f32 mathClampFloat(f32 lower, f32 upper, f32 value);
extern "C" const struct Obj421460Policy DAT_00422058;
extern "C" const struct Obj421460Easing DAT_0042208c;

struct Obj421460Easing;
struct Obj421460Policy;

/* A 30-bit value and a 2-bit tag packed in one word. */
struct Obj421460Packed {
    u32 value : 30;
    u32 tag : 2;
};

/* An animation track binding (vtable at 0x421460; named after it until its real name is known). */
class Obj421460 {
public:
    Obj421460(u32 owner) : owner(owner)
    {
        unk08 = 0;
        unk0c = 0;
        unk10 = 0;
        unk14 = 0;
        unk18 = 0;
        packed1c.value = 0;
        packed1c.tag = 0;
        unk20 = 0;
        unk24 = 0;
        unk28 = 0;
        packed2c.value = 0;
        packed2c.tag = 0;
        policy = &DAT_00422058;
        easing = &DAT_0042208c;
        unk38 = 0.0f;
        unk3c = 0.0f;
        unk40 = 1.0f;
        rangeStart = 0.0f;
        rangeEnd = 1.0f;
        clamp = mathClampFloat;
        unk50 = 0;
        unk54 = 0;
        enabled = 1;
        unk59 = 0;
        unk5a = 0;
        unk5c = 0;
    }
    virtual ~Obj421460();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();

    /* 0x04 */ u32 owner;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ Obj421460Packed packed1c;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ Obj421460Packed packed2c;
    /* 0x30 */ const Obj421460Policy *policy;
    /* 0x34 */ const Obj421460Easing *easing;
    /* 0x38 */ f32 unk38;
    /* 0x3C */ f32 unk3c;
    /* 0x40 */ f32 unk40;
    /* 0x44 */ f32 rangeStart;
    /* 0x48 */ f32 rangeEnd;
    /* 0x4C */ f32 (*clamp)(f32 lower, f32 upper, f32 value);
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u8 enabled;
    /* 0x59 */ u8 unk59;
    /* 0x5A */ u8 unk5a;
    /* 0x5C */ u32 unk5c;
};

typedef char Obj421460SizeCheck[sizeof(Obj421460) == 0x60 ? 1 : -1];

#endif
