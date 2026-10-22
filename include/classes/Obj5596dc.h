#ifndef CLASSES_OBJ5596DC_H
#define CLASSES_OBJ5596DC_H

#include "common.h"

/* The object whose vtable is at 0x5596dc (named after it until its real name is known); it embeds
 * an object (vtable 0x55ae5c) at +8 and is the base of Obj558c00. Slots 0 and 1 are the
 * destructors; the vtable is stored by FUN_0011468c and the destructor. */
class Obj5596dc {
public:
    Obj5596dc();
    virtual ~Obj5596dc();

    /* Public for the retained complete-object ABI wrapper. */
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 member08[0x224];
};

#endif
