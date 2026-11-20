#ifndef CLASSES_OBJ421094_H
#define CLASSES_OBJ421094_H

#include "classes/Obj421230.h"

/* A scene object (vtable at 0x421094; named after it until its real name is known), built from a
 * default resource that it owns once constructed. */
class Obj421094 : public Obj421230Light {
public:
    Obj421094(AsdAllocatorObject *allocator, Obj421230ResHandle<Obj421230Res> handle, void *owner);
    static Obj421094 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x174 */ Obj421230ResHandle<Obj421230Res> handle;   /* res at 0x174, its allocator at 0x178 */
};

typedef char Obj421094SizeCheck[sizeof(Obj421094) == 0x17c ? 1 : -1];

#endif
