#ifndef CLASSES_OBJ4207D0_H
#define CLASSES_OBJ4207D0_H

#include "classes/Obj4206e8.h"

/* The engine's allocator; some call sites pass the requesting owner as a second argument. */
extern "C" void *asdOperatorNew(u32 bytes, ...);

/* The player-model holder: an Obj4206e8 (handle plus three buffer slots) with its own vtable
 * (0x4207d0). It adds no data; its constructor only installs the vtable after the base's. */
class Obj4207d0 : public Obj4206e8 {
public:
    virtual ~Obj4207d0();

    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* Allocates from the main heap; the second argument is the requesting owner. */
    static void *operator new(u32 bytes, void *owner) throw() { return asdOperatorNew(bytes, owner); }
};

#endif
