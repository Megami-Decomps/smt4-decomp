#ifndef CLASSES_OBJ55BE80_H
#define CLASSES_OBJ55BE80_H

#include "common.h"

/* Three words copied together (a position-like triple). */
struct Obj55be80Vec3 {
    u32 x, y, z;
};

/* Four cleared words. */
struct Obj55be80Record {
    Obj55be80Record() : a(0), b(0), c(0), d(0) {}

    u32 a, b, c, d;
};

/* The two cleared words every sound effect starts with, right after the vtable pointer. */
class Obj55be80Base {
public:
    Obj55be80Base() : unk04(0), unk08(0) {}

    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
};

/* The reverb sound effect (vtable at 0x55be80), 0x110 bytes; its constructor sets the defaults.
 * Slot 0 is the destructor. */
class Obj55be80 : public Obj55be80Base {
public:
    Obj55be80();
    virtual ~Obj55be80();

    /* 0x00: vtable pointer */
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ const Obj55be80Vec3 *source;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ u8 unk2C;
    /* 0x2D */ u8 unk2D;
    /* 0x2E */ u8 unk2E[2];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ Obj55be80Vec3 position;
    /* 0x44 */ Obj55be80Record record0;
    /* 0x54 */ Obj55be80Record record1;
    /* 0x64 */ Obj55be80Record record2;
    /* 0x74 */ Obj55be80Record record3;
    /* 0x84 */ Obj55be80Record record4;
    /* 0x94 */ Obj55be80Record record5;
    /* 0xA4 */ u32 unkA4[13];
    /* 0xD8 */ Obj55be80Record tail;
    /* 0xE8 */ Obj55be80Record last;
    /* 0xF8 */ u32 unkF8[2];
    /* 0x100 */ u32 unk100;
    /* 0x104 */ u32 unk104;
    /* 0x108 */ u32 unk108;
    /* 0x10C */ u8 unk10C;
    /* 0x10D */ u8 unk10D;
    /* 0x10E */ u8 unk10E;
    /* 0x10F */ u8 unk10F;
};

typedef char Obj55be80SizeCheck[sizeof(Obj55be80) == 0x110 ? 1 : -1];

#endif
