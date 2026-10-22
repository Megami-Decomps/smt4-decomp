#ifndef CLASSES_OBJ421654_H
#define CLASSES_OBJ421654_H

#include "common.h"

/* What a holder's pointer refers to: only release (slot 3) is known. */
class Obj421654Target {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void release();   /* +0x0C */
};

/* A pointer with two counters; its destructor releases the target when both are set. */
class Obj421654Holder {
public:
    ~Obj421654Holder()
    {
        used = count;
        if (target != NULL && count != 0) {
            target->release();
        }
    }

    /* 0x00 */ Obj421654Target *target;
    /* 0x04 */ u32 count;
    /* 0x08 */ u32 used;
    /* 0x0C */ u32 unk0c;
};

/* The base of Obj421654 (vtable at 0x420ffc): one holder after the vtable pointer. */
class Obj420ffc {
public:
    virtual ~Obj420ffc() {}

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ Obj421654Holder holderA;
};

/* The object whose vtable is at 0x421654 (named after it until its real name is known): the base's
 * holder plus two of its own, destroyed in reverse order. */
class Obj421654 : public Obj420ffc {
public:
    virtual ~Obj421654();

private:
    /* 0x20 */ Obj421654Holder holderB;
    /* 0x30 */ Obj421654Holder holderC;
};

/* Common callback view of the object's prefix. */
struct Obj421654StateView {
    /* 0x00 */ void *vtable;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 state;
};

#endif
