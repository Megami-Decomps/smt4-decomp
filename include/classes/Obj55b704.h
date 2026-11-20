#ifndef CLASSES_OBJ55B704_H
#define CLASSES_OBJ55B704_H

#include "classes/Obj55b680.h"

/* A scene object (vtable at 0x55b704; named after it until its real name is known), built from a
 * default resource that it owns once constructed. */
class Obj55b704 : public Obj55b680Light {
public:
    Obj55b704(AsdAllocatorObject *allocator, Obj55b680ResHandle<Obj55b680Res> handle, void *owner);
    static Obj55b704 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x174 */ Obj55b680ResHandle<Obj55b680Res> handle;   /* res at 0x174, its allocator at 0x178 */
};

typedef char Obj55b704SizeCheck[sizeof(Obj55b704) == 0x17c ? 1 : -1];

#endif
