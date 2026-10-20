#ifndef OBJ558C9C_H
#define OBJ558C9C_H

#include "common.h"

/* The object FUN_0030f044 hands back for kind 0xB: only its eleventh virtual method is known. The
 * methods are pure here only so that no unit emits the vtable. */
class Obj558c9cTarget {
public:
    virtual void vfunc00() = 0;
    virtual void vfunc04() = 0;
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;
    virtual void vfunc10() = 0;
    virtual void vfunc14() = 0;
    virtual void vfunc18() = 0;
    virtual void vfunc1c() = 0;
    virtual void vfunc20() = 0;
    virtual void vfunc24() = 0;
    virtual s32 isActive() = 0;   /* +0x28 */
};

/* The object whose vtable is at 0x558c9c (named after it until its real name is known); no
 * constructor for it has been found. The methods are pure here only so that no unit emits the
 * vtable: the functions exist and the constructors are still C-form. */
class Obj558c9c {
public:
    virtual s32 vfunc00() = 0;
    virtual void vfunc04() = 0;
    virtual void vfunc08() = 0;
    virtual s32 isTargetActive() = 0;   /* +0x0C: _ZN9Obj558c9c14isTargetActiveEv */

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 ready;
};

/* A class derived from Obj558c9c (vtable 0x559f08; the vtable at 0x55a5d4 lists the same
 * functions) that overrides the first two methods. */
class Obj559f08 : public Obj558c9c {
public:
    virtual s32 vfunc00() = 0;
    virtual void vfunc04() = 0;

private:
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ u8 loaded;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u8 entry[1];
};

#endif
