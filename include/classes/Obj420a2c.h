#ifndef CLASSES_OBJ420A2C_H
#define CLASSES_OBJ420A2C_H

#include "common.h"

/* The allocator-like owner: slot 0 allocates a buffer and returns its handle (0 on failure), slot 1
 * releases a handle. */
class Obj420a2cOwner {
public:
    virtual u32 allocate(u32 bytes, u32 alignment);   /* +0x00 */
    virtual void release(u32 handle);   /* +0x04 */
};

/* A source description: its type (6 is a single-plane source; 2/3 split it top and bottom, 4/5 left and
 * right), the picture size and the rotation of its tiles (1: 90, 2: 180, 3: 270 degrees). */
struct Obj420a2cSource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 type;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
    /* 0x1C */ u8 unk1C[8];
    /* 0x24 */ s32 rotation;
};

/* A 0x20-byte entry filled in from a source: a texture tile over the source's pixels. */
class Obj420a2cEntry {
public:
    Obj420a2cEntry();

    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ f32 rotation;    /* degrees */
    /* 0x18 */ u8 unk18[8];
};

/* The non-virtual base of Obj420a2c: the owner and both sources (stored from +4, after the
 * derived class's vtable pointer). */
class Obj420a2cBase {
public:
    Obj420a2cBase()
        : owner(NULL), sourceA(NULL), sourceB(NULL)
    {
    }

    /* 0x04 */ Obj420a2cOwner *owner;
    /* 0x08 */ Obj420a2cSource *sourceA;
    /* 0x0C */ Obj420a2cSource *sourceB;
};

/* An object that builds up to three entries from two sources (vtable at 0x420a2c, named after it
 * until its real name is known). */
class Obj420a2c : public Obj420a2cBase {
public:
    Obj420a2c();
    ~Obj420a2c();
    virtual int buildEntries(Obj420a2cOwner *owner, Obj420a2cSource *sourceA,
                             Obj420a2cSource *sourceB); /* +0x00 */
    virtual void releaseSources(); /* +0x04 */
    virtual s32 getValue(u32) const; /* +0x08 */
    virtual u32 getOutput(u32) const; /* +0x0c */

    /* 0x00: vtable pointer */
    /* 0x10 */ u32 handles[3];
    /* 0x1C */ u32 outA[2];
    /* 0x24 */ u32 outB[1];
    /* 0x28 */ u32 firstFormat;     /* 0x400 or 0x410, by the source's type */
    /* 0x2C */ u32 secondFormat;    /* the other of the two */
    /* 0x30 */ u32 flags;
    /* 0x34 */ u32 firstIndex;      /* 0 or 1, by the source's type */
    /* 0x38 */ u32 secondIndex;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ Obj420a2cEntry entries[3];
    /* 0xA0 */ u32 unkA0;
};
typedef char Obj420a2cLayoutCheck[sizeof(Obj420a2cBase) == 12 &&
    sizeof(Obj420a2cEntry) == 0x20 && sizeof(Obj420a2c) == 0xA4 ? 1 : -1];

#endif
