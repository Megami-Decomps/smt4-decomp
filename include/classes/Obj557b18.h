#ifndef CLASSES_OBJ557B18_H
#define CLASSES_OBJ557B18_H

#include "common.h"
#include <stddef.h>
#include "nw/math/MTX34.h"
#include "Model/ModelUnitBuffers.h"
#include "map/MapVector.h"

extern "C" void asdOperatorDelete(void *block);

/* A 0x30-byte element of the camera's two-element table; its constructor clears four values. */
extern "C" void nn_math_ARMv6_MTX34CopyAsm(nw::math::MTX34 *dest, const nw::math::MTX34 *source);

/* A word that starts cleared. */
struct Obj557b18Word {
    Obj557b18Word() : value(0) {}
    /* 0x0 */ u32 value;
};

/* Two cleared words. */
struct Obj557b18WordPair {
    /* 0x0 */ Obj557b18Word first;
    /* 0x4 */ Obj557b18Word second;
};

class Obj557b18Element {
public:
    Obj557b18Element();

    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ Obj557b18WordPair front;
    /* 0x1C */ u8 unk1c[8];
    /* 0x24 */ Obj557b18WordPair back;
    /* 0x2C */ u8 unk2c[4];
};

/* The camera's world matrix: starts as a copy of the shared identity. */
class Obj557b18Matrix : public nw::math::MTX34 {
public:
    Obj557b18Matrix() { nn_math_ARMv6_MTX34CopyAsm(this, &nw::math::MTX34::Identity()); }
};

/* The body's translation: starts at the origin; controllerSetDestination copies a whole vector in. */
struct Obj557b18Position : MapVector {
    Obj557b18Position() { x = 0.0f; y = 0.0f; z = 0.0f; }
    Obj557b18Position &operator=(const MapVector &value)
    {
        MapVector::operator=(value);
        return *this;
    }
};

/* A scale vector, one in every axis. */
struct Obj557b18Scale : MapVector {
    Obj557b18Scale() { x = 1.0f; y = 1.0f; z = 1.0f; }
};

/* The body's bone poses, what Obj557b18.skeleton points at (lookupNameEntry reads a bone's position). */
struct Obj557b18Skeleton {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 boneCount;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ void *poses;         /* 0x30 bytes a bone */
};

/* A node of the model data's bone-name dictionary (0xC bytes). Node 0 is the search tree's root: bone `i` is
 * node `i + 1`. */
struct Obj557b18NameNode {
    /* 0x00 */ u32 referenceBit;
    /* 0x04 */ u16 left;
    /* 0x06 */ u16 right;
    /* 0x08 */ const char *name;
};

/* The model data the body was built from, what Obj557b18.modelData points at (only the bone names). */
struct Obj557b18ModelData {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ Obj557b18NameNode *boneNames;
};

typedef char Obj557b18NameLayoutCheck[sizeof(Obj557b18NameNode) == 0xC && offsetof(Obj557b18Skeleton, boneCount) == 8 &&
    offsetof(Obj557b18ModelData, boneNames) == 0x78 ? 1 : -1];

/* The object whose vtable is at 0x557b18 (named after it until its real name is known): a model
 * body (MoriModelUnit, 0x26C bytes), created by its content (Model/MoriModelContent.h) from the
 * content's resource; the controller functions move it, the model manager lists it. */
class Obj557b18 {
public:
    Obj557b18();
    /* Starts empty like the default constructor, tags the unit with `id` (0x1B0) and attaches the content. */
    Obj557b18(UnitModelContent *content, u32 partIndex, u32 id);
    virtual ~Obj557b18();
    static void operator delete(void *block) { asdOperatorDelete(block); }

    /* Attaches model content: sets up one of its parts, allocates the channels sized from its meshes,
     * builds the extra object when the content has extra data and resets the matrix. */
    void attachContent(UnitModelContent *content, u32 partIndex);

    /* 0x00: vtable pointer */
    /* 0x04 */ u32 flags;        /* bit 0 shown, bits 0-1 set to hide (see ControllerModel), bit 2 pending selection */
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
    /* 0x108 */ Obj557b18Skeleton *skeleton;
    /* 0x10C */ u32 unk10c;
    /* 0x110 */ u32 unk110;
    /* 0x114 */ u32 unk114;
    /* 0x118 */ u32 unk118;
    /* 0x11C */ u8 unk11c;
    /* 0x11D */ u8 unk11d[0x93];
    /* 0x1B0 */ Obj557b18 *parent;  /* the body this one is attached to, or NULL */
    /* 0x1B4 */ Obj557b18Position position;
    /* 0x1C0 */ Obj557b18Matrix matrix;  /* rotation (controllerSetRotationEulerDegrees) */
    /* 0x1F0 */ Obj557b18Scale scale;    /* set by controllerSetPosition */
    /* 0x1FC */ f32 speed;        /* starts at 1; the trap sets 6 before moving the body */
    /* 0x200 */ u8 unk200;
    /* 0x201 */ u8 unk201[3];
    /* 0x204 */ u32 pendingValue;   /* cleared with the pending flag (flags bit 2) */
    /* 0x208 */ s16 selection;      /* -1 when none */
    /* 0x20A */ u8 unk20a[2];
    /* 0x20C */ u32 unk20c;
    /* 0x210 */ Obj557b18ModelData *modelData;
    /* 0x214 */ u8 unk214[0x40];
    /* 0x254 */ u32 unk254;
    /* 0x258 */ u32 unk258;
    /* 0x25C */ u32 unk25c;
    /* 0x260 */ u32 unk260;
    /* 0x264 */ u32 unk264;
    /* 0x268 */ u32 unk268;
};

/* Releases the storage the body owns (its destructor's body). */
extern "C" void moriModelBodyReleaseOwnedStorage(Obj557b18 *body);
/* Clears the pending flag (flags bit 2) and the selection. */
extern "C" void FUN_003fd790(Obj557b18 *body);

typedef char Obj557b18LayoutCheck[sizeof(Obj557b18Element) == 0x30 &&
    offsetof(Obj557b18, elements) == 0x24 && offsetof(Obj557b18, position) == 0x1B4 && offsetof(Obj557b18, matrix) == 0x1C0 &&
    offsetof(Obj557b18, scale) == 0x1F0 && offsetof(Obj557b18, selection) == 0x208 &&
    offsetof(Obj557b18, speed) == 0x1FC && offsetof(Obj557b18, skeleton) == 0x108 &&
    offsetof(Obj557b18, modelData) == 0x210 && offsetof(Obj557b18, unk214) == 0x214 &&
    sizeof(Obj557b18) == 0x26C ? 1 : -1];

#endif
