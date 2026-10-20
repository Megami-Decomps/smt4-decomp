#ifndef OBJ558C00_H
#define OBJ558C00_H

#include "common.h"
#include "classes/Obj5596dc.h"

/* A range of data: its start is `base + offset`. */
struct Obj558c00Range {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 base;
    /* 0x10 */ u32 size;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 offset;
};

/* An object the owner deletes through its virtual destructor. */
class Obj558c00Child {
public:
    virtual ~Obj558c00Child();
};

/* The object whose vtable is at 0x558c00 (named after it until its real name is known); the vtable
 * is stored by _ZN9Obj558c00D1Ev and FUN_002ecd54. It derives from Obj5596dc. Slots 0 and 1 are the
 * destructors; the two data hooks (vfunc0c, vfunc14) take a range and are reached through
 * vfunc08 and vfunc10, which first prepare the range. */
class Obj558c00 : public Obj5596dc {
public:
    virtual ~Obj558c00();
    virtual s32 vfunc08(s32 unused, Obj558c00Range *range);   /* _ZN9Obj558c007vfunc08EiP14Obj558c00Range */
    virtual s32 vfunc0c(Obj558c00Range *range);   /* _ZN9Obj558c007vfunc0cEP14Obj558c00Range: hands the range to FUN_0010a014 */
    virtual s32 vfunc10(s32 unused, Obj558c00Range *range);   /* _ZN9Obj558c007vfunc10EiP14Obj558c00Range */
    virtual s32 vfunc14(Obj558c00Range *range);   /* _ZN9Obj558c007vfunc14EP14Obj558c00Range: hands the range to FUN_00109ff8 */
    virtual void vfunc18();
    virtual void vfunc1c();   /* _ZN9Obj558c007vfunc1cEv */

protected:
    /* 0x22C */ Obj558c00Child *child;
};

#endif
