#ifndef CLASSES_OBJ420A2C_H
#define CLASSES_OBJ420A2C_H

#include "common.h"

/* The allocator-like owner: slot 1 releases a handle. */
class Obj420a2cOwner {
public:
    virtual void vfunc00();
    virtual void release(u32 handle);   /* +0x04 */
};

/* A source description; only its type is read here (6 is the second kind). */
struct Obj420a2cSource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 type;
};

/* A 0x20-byte entry filled in from a source. */
class Obj420a2cEntry {
public:
    Obj420a2cEntry() { unk10 = 0; }

    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14[0xC];
};

/* The non-virtual base of Obj420a2c: the owner and the first source (stored at +4, after the
 * derived class's vtable pointer). */
class Obj420a2cBase {
public:
    Obj420a2cBase()
        : owner(NULL), sourceA(NULL)
    {
    }

    /* 0x04 */ Obj420a2cOwner *owner;
    /* 0x08 */ Obj420a2cSource *sourceA;
};

/* An object that builds up to three entries from two sources (vtable at 0x420a2c, named after it
 * until its real name is known). */
class Obj420a2c : public Obj420a2cBase {
public:
    Obj420a2c();
    virtual int buildEntries();   /* +0x00: builds the entry of each present source */
    virtual Obj420a2c *vfunc04();

    /* 0x00: vtable pointer */
    /* 0x0C */ Obj420a2cSource *sourceB;
    /* 0x10 */ u32 handles[3];
    /* 0x1C */ u32 outA[2];
    /* 0x24 */ u32 outB[2];
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 flags;
    /* 0x34 */ u8 unk34[0xC];
    /* 0x40 */ Obj420a2cEntry entries[3];
    /* 0xA0 */ u32 unkA0;
};

#endif
