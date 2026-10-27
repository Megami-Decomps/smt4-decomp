#ifndef CLASSES_OBJ4211DC_H
#define CLASSES_OBJ4211DC_H

#include "common.h"
#include "classes/AsdAllocatorObject.h"
#include "classes/Obj421654.h"
#include <stddef.h>

/* An object that remembers the allocator it was made from (vtable slot 0 is its destructor). */
class Obj4211dcItem {
public:
    virtual ~Obj4211dcItem();

    /* 0x04 */ AsdAllocatorObject *allocator;
};

/* A pointer to an item that is destroyed and handed back to its allocator when the owner owns it. */
struct Obj4211dcOwned {
    ~Obj4211dcOwned()
    {
        Obj4211dcItem *object = item;
        if (object != NULL && owns != 0) {
            object->~Obj4211dcItem();
            object->allocator->release(object);
        }
    }

    /* 0x00 */ Obj4211dcItem *item;
    /* 0x04 */ u8 owns;
};

/* The object whose vtable is at 0x4211dc (named after it until its real name is known): an owned
 * item first, five holders and another owned item last, destroyed in reverse order. */
class Obj4211dc {
public:
    virtual ~Obj4211dc();

    /* 0x004 */ u8 unk04[4];
    /* 0x008 */ Obj4211dcOwned first;
    /* 0x010 */ u8 unk10[0x38];
    /* 0x048 */ Obj421654Holder holder48;
    /* 0x058 */ u8 unk58[8];
    /* 0x060 */ Obj421654Holder holder60;
    /* 0x070 */ u8 unk70[0x38];
    /* 0x0A8 */ Obj421654Holder holderA8;
    /* 0x0B8 */ u8 unkB8[4];
    /* 0x0BC */ Obj421654Holder holderBC;
    /* 0x0CC */ Obj421654Holder holderCC;
    /* 0x0DC */ u8 unkDC[0x50];
    /* 0x12C */ Obj4211dcOwned last;
};

typedef char Obj4211dcLayoutCheck[
    offsetof(Obj4211dc, first) == 0x08 && offsetof(Obj4211dc, holder48) == 0x48 &&
    offsetof(Obj4211dc, holder60) == 0x60 && offsetof(Obj4211dc, holderA8) == 0xA8 &&
    offsetof(Obj4211dc, holderBC) == 0xBC && offsetof(Obj4211dc, holderCC) == 0xCC &&
    offsetof(Obj4211dc, last) == 0x12C ? 1 : -1];

#endif
