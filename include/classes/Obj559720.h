#ifndef CLASSES_OBJ559720_H
#define CLASSES_OBJ559720_H

#include "common.h"

/* The root of the chain (vtable at 0x558a3c, named after it until its real name is known): a
 * polymorphic object with one state byte at +4. */
class Obj558a3c {
public:
    Obj558a3c();
    virtual ~Obj558a3c() {}
    virtual void vfunc08() = 0;

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 state;
};

/* The middle of the chain (vtable at 0x55b314, named after it until its real name is known): its
 * constructor is _ZN9Obj55b314C1Ei. Its destructor calls vfunc08 (an empty hook here), which is why
 * derived destructors still store its vtable. */
class Obj55b314 : public Obj558a3c {
public:
    Obj55b314(s32 value);
    virtual ~Obj55b314() { vfunc08(); }
    virtual void vfunc08() {}
    virtual void vfunc0c() = 0;
    virtual void vfunc10() = 0;
    virtual void vfunc14() = 0;

protected:
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 value;
};

/* The object whose vtable is at 0x559720 (named after it until its real name is known); it holds
 * one more word at +0x10. Slots 0 and 1 are the destructors; the vtable is stored by _ZN9Obj559720C1Ei
 * (the constructor) and the destructor. */
class Obj559720 : public Obj55b314 {
public:
    Obj559720(s32 extra);
    virtual ~Obj559720();

protected:
    /* 0x10 */ s32 extra;
};

#endif
