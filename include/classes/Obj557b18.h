#ifndef CLASSES_OBJ557B18_H
#define CLASSES_OBJ557B18_H

#include "common.h"
#include <stddef.h>
#include "nw/math/MTX34.h"
#include "Model/ModelUnitBuffers.h"

/* A 0x30-byte element of the camera's two-element table; its constructor clears four values. */
extern "C" void nn_math_ARMv6_MTX34CopyAsm(nw::math::MTX34 *dest, const nw::math::MTX34 *source);

class Obj557b18Element {
public:
    Obj557b18Element();

    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 first;
    /* 0x18 */ u32 second;
    /* 0x1C */ u8 unk1c[8];
    /* 0x24 */ u32 third;
    /* 0x28 */ u32 fourth;
    /* 0x2C */ u8 unk2c[4];
};

/* The camera's world matrix: starts as a copy of the shared identity. */
class Obj557b18Matrix : public nw::math::MTX34 {
public:
    Obj557b18Matrix() { nn_math_ARMv6_MTX34CopyAsm(this, &nw::math::MTX34::Identity()); }
};

/* A scale vector, one in every axis. */
struct Obj557b18Scale {
    Obj557b18Scale() : x(1.0f), y(1.0f), z(1.0f) {}
    f32 x, y, z;
};

/* The object whose vtable is at 0x557b18 (named after it until its real name is known): a camera
 * controller with a two-element table, a world matrix and a block of state. */
class Obj557b18 {
public:
    Obj557b18();
    /* Starts empty like the default constructor, tags the unit with `id` (0x1B0) and attaches the content. */
    Obj557b18(UnitModelContent *content, u32 partIndex, u32 id);
    virtual ~Obj557b18() = 0;

    /* Attaches model content: sets up one of its parts, allocates the channels sized from its meshes,
     * builds the extra object when the content has extra data and resets the matrix. */
    void attachContent(UnitModelContent *content, u32 partIndex);

    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u8 unk10[0x14];
    /* 0x24 */ Obj557b18Element elements[2];
    /* 0x84 */ u8 unk84[0x14];
    /* 0x98 */ u32 unk98;
    /* 0x9C */ u32 unk9c;
    /* 0xA0 */ u8 unka0[8];
    /* 0xA8 */ u32 unka8;
    /* 0xAC */ u32 unkac;
    /* 0xB0 */ u8 unkb0[0x18];
    /* 0xC8 */ u32 unkc8;
    /* 0xCC */ u32 unkcc;
    /* 0xD0 */ u8 unkd0[8];
    /* 0xD8 */ u32 unkd8;
    /* 0xDC */ u32 unkdc;
    /* 0xE0 */ u8 unke0[4];
    /* 0xE4 */ u8 unke4;
    /* 0xE5 */ u8 unke5;
    /* 0xE6 */ u8 unke6[2];
    /* 0xE8 */ u32 unke8;
    /* 0xEC */ u32 unkec;
    /* 0xF0 */ u32 unkf0;
    /* 0xF4 */ u32 unkf4;
    /* 0xF8 */ u32 unkf8;
    /* 0xFC */ u32 unkfc;
    /* 0x100 */ u32 unk100;
    /* 0x104 */ u32 unk104;
    /* 0x108 */ u8 unk108[4];
    /* 0x10C */ u32 unk10c;
    /* 0x110 */ u32 unk110;
    /* 0x114 */ u32 unk114;
    /* 0x118 */ u32 unk118;
    /* 0x11C */ u8 unk11c;
    /* 0x11D */ u8 unk11d[0x93];
    /* 0x1B0 */ u32 unk1b0;
    /* 0x1B4 */ f32 unk1b4;
    /* 0x1B8 */ f32 unk1b8;
    /* 0x1BC */ f32 unk1bc;
    /* 0x1C0 */ Obj557b18Matrix matrix;
    /* 0x1F0 */ Obj557b18Scale scale;
    /* 0x1FC */ f32 unk1fc;
    /* 0x200 */ u8 unk200;
    /* 0x201 */ u8 unk201[3];
    /* 0x204 */ u32 unk204;
    /* 0x208 */ u16 unk208;
    /* 0x20A */ u8 unk20a[2];
    /* 0x20C */ u32 unk20c;
    /* 0x210 */ u32 unk210;
    /* 0x214 */ u8 unk214[0x40];
    /* 0x254 */ u32 unk254;
    /* 0x258 */ u32 unk258;
    /* 0x25C */ u32 unk25c;
    /* 0x260 */ u32 unk260;
    /* 0x264 */ u32 unk264;
    /* 0x268 */ u32 unk268;
};

typedef char Obj557b18LayoutCheck[sizeof(Obj557b18Element) == 0x30 &&
    offsetof(Obj557b18, elements) == 0x24 && offsetof(Obj557b18, matrix) == 0x1C0 &&
    offsetof(Obj557b18, unk1fc) == 0x1FC && offsetof(Obj557b18, unk214) == 0x214 &&
    sizeof(Obj557b18) == 0x26C ? 1 : -1];

#endif
