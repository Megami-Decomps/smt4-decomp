#ifndef CLASSES_OBJ557AE8_H
#define CLASSES_OBJ557AE8_H

#include "common.h"

/* Anything the owner deletes through its virtual destructor. */
class Obj557ae8Child {
public:
    virtual ~Obj557ae8Child();
};

/* One of the three entries: the object it owns sits at +8. */
struct Obj557ae8Slot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Obj557ae8Child *child;
    /* 0x0C */ u8 unk0C[0x50];
};

/* The object whose vtable is at 0x557ae8 (named after it until its real name is known): it owns
 * one object and three slots, each owning one more, and deletes them all when it is destroyed.
 * Slot 0 is the destructor. */
class Obj557ae8 {
public:
    Obj557ae8();
    virtual ~Obj557ae8();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ Obj557ae8Child *owned;
    /* 0x0C */ u8 unk0C[0x0C];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ Obj557ae8Slot slots[3];
};

typedef char Obj557ae8LayoutCheck[sizeof(Obj557ae8) == 0x130 &&
    sizeof(Obj557ae8Slot) == 0x5C ? 1 : -1];

#endif
