#ifndef CLASSES_OBJ4209CC_H
#define CLASSES_OBJ4209CC_H

#include "common.h"

extern "C" {
int asdMdlManagerDestroy(u32 handle);
int asdMemFree(void *block);
int asdMemFreeNonNull(void *block);
}

/* The allocator a part came from. Only release (slot 3) is known. */
class Obj4209ccAllocator {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void release(void *block);   /* +0x0C */
};

/* A part an Obj4209cc owns; it remembers the allocator it was made by. */
class Obj4209ccPart {
public:
    virtual ~Obj4209ccPart();

    /* 0x04 */ Obj4209ccAllocator *allocator;
};

/* An object holding two rows of three parts, a model-manager handle and a block (vtable at
 * 0x4209cc, named after it until its real name is known). */
class Obj4209cc {
public:
    Obj4209cc();
    virtual ~Obj4209cc();
    static void operator delete(void *block) { asdMemFreeNonNull(block); }

/* public: the deleting destructor is still C-form (_ZN9Obj4209ccD0Ev) and reaches the fields. */
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 handle;
    /* 0x0C */ Obj4209ccPart *rowA[3];
    /* 0x18 */ Obj4209ccPart *rowB[3];
    /* 0x24 */ void *buffer;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ f32 scale;       /* starts at 1.0 */
    /* 0x34 */ f32 unk34[3];
    /* 0x40 */ u16 unk40;       /* starts at 7 */
};

#endif
