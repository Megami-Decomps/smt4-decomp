#ifndef CLASSES_OBJ421A78_H
#define CLASSES_OBJ421A78_H

#include "common.h"

/* Three words copied together (a position-like triple). */
struct Obj421a78Vec3 {
    u32 x, y, z;
};

/* Four cleared words. */
struct Obj421a78Record {
    Obj421a78Record() : a(0), b(0), c(0), d(0) {}

    u32 a, b, c, d;
};

/* The two cleared words every sound effect starts with, right after the vtable pointer. */
class Obj421a78Base {
public:
    Obj421a78Base() : unk04(0), unk08(0) {}

    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
};

/* The reverb sound effect (vtable at 0x421a78), 0x110 bytes; its constructor sets the defaults.
 * Slot 0 is the destructor. */
class Obj421a78 : public Obj421a78Base {
public:
    Obj421a78();
    virtual ~Obj421a78();

    /* 0x00: vtable pointer */
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ const Obj421a78Vec3 *source;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ u8 unk2C;
    /* 0x2D */ u8 unk2D;
    /* 0x2E */ u8 unk2E[2];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ Obj421a78Vec3 position;
    /* 0x44 */ Obj421a78Record record0;
    /* 0x54 */ Obj421a78Record record1;
    /* 0x64 */ Obj421a78Record record2;
    /* 0x74 */ Obj421a78Record record3;
    /* 0x84 */ Obj421a78Record record4;
    /* 0x94 */ Obj421a78Record record5;
    /* 0xA4 */ u32 unkA4[13];
    /* 0xD8 */ Obj421a78Record tail;
    /* 0xE8 */ Obj421a78Record last;
    /* 0xF8 */ u32 unkF8[2];
    /* 0x100 */ u32 unk100;
    /* 0x104 */ u32 unk104;
    /* 0x108 */ u32 unk108;
    /* 0x10C */ u8 unk10C;
    /* 0x10D */ u8 unk10D;
    /* 0x10E */ u8 unk10E;
    /* 0x10F */ u8 unk10F;
};

typedef char Obj421a78SizeCheck[sizeof(Obj421a78) == 0x110 ? 1 : -1];

#endif
