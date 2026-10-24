#ifndef CLASSES_OBJ55B87C_H
#define CLASSES_OBJ55B87C_H

#include "common.h"

extern "C" f32 mathClampFloat(f32 lower, f32 upper, f32 value);
extern "C" const struct Obj55b87cPolicy DAT_0055c4f0;
extern "C" const struct Obj55b87cEasing DAT_0055c524;

struct Obj55b87cEasing;
struct Obj55b87cPolicy;

/* A 30-bit value and a 2-bit tag packed in one word. */
struct Obj55b87cPacked {
    u32 value : 30;
    u32 tag : 2;
};

/* An animation track binding (vtable at 0x55b87c; named after it until its real name is known). */
class Obj55b87c {
public:
    Obj55b87c(u32 owner) : owner(owner)
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
        policy = &DAT_0055c4f0;
        easing = &DAT_0055c524;
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
    virtual ~Obj55b87c();
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
    /* 0x1C */ Obj55b87cPacked packed1c;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ Obj55b87cPacked packed2c;
    /* 0x30 */ const Obj55b87cPolicy *policy;
    /* 0x34 */ const Obj55b87cEasing *easing;
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

typedef char Obj55b87cSizeCheck[sizeof(Obj55b87c) == 0x60 ? 1 : -1];

#endif
