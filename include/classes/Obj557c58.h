#ifndef CLASSES_OBJ557C58_H
#define CLASSES_OBJ557C58_H

#include "classes/Obj557ae8.h"

extern "C" void *asdOperatorNew(u32 bytes, void *owner);

/* The status-screen model holder: an Obj557ae8 with its own vtable (0x557c58). It adds no data;
 * its constructor only installs the vtable after the base's. */
class Obj557c58 : public Obj557ae8 {
public:
    virtual ~Obj557c58();

    /* Allocates from the main heap; the second argument is the requesting owner. */
    static void *operator new(u32 bytes, void *owner) throw() { return asdOperatorNew(bytes, owner); }
};

#endif
