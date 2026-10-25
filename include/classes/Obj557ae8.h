#ifndef CLASSES_OBJ557AE8_H
#define CLASSES_OBJ557AE8_H

#include "common.h"
#include "gfx/ControllerModel.h"

/* Anything the owner deletes through its virtual destructor. */
class Obj557ae8Child {
public:
    virtual ~Obj557ae8Child();

    /* 0x04 */ ControllerModel *model; /* the model the child shows, once loaded */
    /* 0x08 */ u8 unk08[0x18];
};

/* One of the three entries: a model slot with its load state, resource kind, the object it owns
 * and the name of the resource it shows. */
struct Obj557ae8Slot {
    Obj557ae8Slot();

    /* 0x00 */ s32 state;
    /* 0x04 */ u16 kind;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ Obj557ae8Child *child;
    /* 0x0C */ u8 unk0C[0xC];
    /* 0x18 */ void *callback;
    /* 0x1C */ char name[0x40];
};

/* The object whose vtable is at 0x557ae8 (named after it until its real name is known): it owns
 * one object and three slots, each owning one more, and deletes them all when it is destroyed.
 * Slot 0 is the destructor. */
class Obj557ae8;
extern "C" void FUN_003e5858(Obj557ae8 *object);

class Obj557ae8 {
public:
    Obj557ae8();
    virtual ~Obj557ae8();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();

    friend void FUN_003e5858(Obj557ae8 *object);

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04; /* 1 while the owned object waits to load */
    /* 0x08 */ Obj557ae8Child *owned;
    /* 0x0C */ u8 unk0C[0x0C];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ Obj557ae8Slot slots[3];
};

typedef char Obj557ae8LayoutCheck[sizeof(Obj557ae8) == 0x130 &&
    sizeof(Obj557ae8Slot) == 0x5C ? 1 : -1];

#endif
