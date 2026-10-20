#ifndef CLASSES_OBJ4207C0_H
#define CLASSES_OBJ4207C0_H

#include "common.h"

/* A shared resource (texture) with a reference count. */
class Obj4207c0Resource {
public:
    virtual ~Obj4207c0Resource();

    /* 0x04 */ u32 id;
    /* 0x08 */ u8 unk08[0x38];
    /* 0x40 */ s32 refCount;
};

/* The registry the resources are kept in: a header word and sixteen resource pointers. */
struct Obj4207c0Registry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj4207c0Resource *entries[16];
};

/* Holds up to sixteen references to shared resources and drops them (vtable at 0x4207c0, named
 * after it until its real name is known). */
class Obj4207c0 {
public:
    virtual ~Obj4207c0();

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ Obj4207c0Resource *resources[16];
};

#endif
