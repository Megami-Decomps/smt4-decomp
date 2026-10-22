#ifndef CLASSES_OBJ55B8D0_H
#define CLASSES_OBJ55B8D0_H

#include "common.h"

/* What a view updater registers with: only the fourth virtual method (handing a handle back) is
 * used here. */
class Obj55b8d0Owner {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void release(u32 handle);   /* +0x0C */
};


/* The object whose vtable is at 0x55bad0: attachment flag at +9 and handle at +0x1C. The vtable is stored by
 * FUN_0017261c, FUN_001cae40 and the destructor. */
class Obj55bad0 {
public:
    virtual ~Obj55bad0();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ Obj55b8d0Owner *owner;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 attached;
    /* 0x0A */ u8 unk0A[0x12];
    /* 0x1C */ u32 handle;
};

#endif
